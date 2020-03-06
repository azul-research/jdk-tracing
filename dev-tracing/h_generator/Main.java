import java.util.*;
import java.io.*;
import java.util.regex.Pattern;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.regex.Matcher;
import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CommonTokenStream;
import org.antlr.v4.runtime.tree.ParseTreeWalker;
import org.antlr.v4.runtime.tree.ParseTree;
import java.util.stream.IntStream;
import java.util.stream.Collectors;



public class Main {
  /**
    args[0] -- *.d source file
    args[1] -- output file
    other arguments contain "dtrace" and "lttng" to generate the corresponding marco value
    with --print only macro names will be written 
  **/
  public static void main(String[] args) {
    String inFile = args[0];
    String outFile = args[1];
    HashSet<String> argsList = new HashSet<String>(Arrays.asList(args)); 
    boolean isDtraceEnabled = argsList.contains("dtrace");
    boolean isLTTngEnabled = argsList.contains("lttng");
    boolean printNames = argsList.contains("--print");

    try (PrintStream out = new PrintStream(new FileOutputStream(outFile, false))) {
      if (isLTTngEnabled && !printNames) {
        out.println("#include \"utilities/lttng.hpp\"\n");
      }
      
      String text = new Scanner(new File(inFile)).useDelimiter("\\A").next();
      ProbesLexer lexer = new ProbesLexer(CharStreams.fromString(text));
      ProbesParser parser = new ProbesParser(new CommonTokenStream(lexer));
      ParseTree tree = parser.provider();
      ParseTreeWalker walker = new ParseTreeWalker();

      walker.walk(new ProbesWalker(isLTTngEnabled, isDtraceEnabled, printNames, out), tree);
    } catch (Exception e) {
      System.out.println("Exception! " + e);
    }
  }

  public static class ProbesWalker extends ProbesBaseListener {

    private String provider = "";
    private boolean lttng;
    private boolean dtrace;
    private boolean printNames;
    private PrintStream stream;


    ProbesWalker(boolean isLTTngEnabled, boolean isDtraceEnabled, boolean printNames, PrintStream output) {
      lttng = isLTTngEnabled;
      dtrace = isDtraceEnabled;
      stream = output;
      this.printNames = printNames;
    }

    public void enterProvider(ProbesParser.ProviderContext ctx) {
      provider = ctx.IDENTIFIER().getText();
    }

    public void enterProbe(ProbesParser.ProbeContext ctx) {
      String name = ctx.IDENTIFIER().getText();
      int args_number = ctx.args.size();
      // System.out.println(ctx.args);
      String probeMacroName = (provider + "_" + name).toUpperCase().replace("__", "_");
      String args = IntStream.range(0, args_number).mapToObj(i -> ("arg" + i)).collect(Collectors.joining(","));
      String params = "(" + provider + ", " + name + ((args_number != 0) ? ", " : "") + args + ")";

      if (printNames) {
        stream.println(probeMacroName);
        return;
      }

      stream.println("#define " + probeMacroName + "_WRAPPER" + "(" + args + ") " + "\\");
      if (dtrace) {
        stream.print(probeMacroName + "(" + args + ")");
      }
      if (dtrace && lttng) {
        stream.print(";");
      }
      if (dtrace) {
        stream.print("tracepoint" + params);
      }
      stream.println();
      stream.println();
    }
  }
}
