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
    with generate in arguments lttng tracepoints .h file will be generated
  **/
  public static void main(String[] args) {
    String inFile = args[0];
    String outFile = args[1];
    HashSet<String> argsList = new HashSet<String>(Arrays.asList(args)); 
    boolean isDtraceEnabled = argsList.contains("dtrace");
    boolean isLTTngEnabled = argsList.contains("lttng");
    boolean printNames = argsList.contains("--print");
    boolean generate = argsList.contains("generate");
    
    try (PrintStream out = new PrintStream(new FileOutputStream(outFile, false))) {
      String text = new Scanner(new File(inFile)).useDelimiter("\\A").next();
      ProbesLexer lexer = new ProbesLexer(CharStreams.fromString(text));
      ProbesParser parser = new ProbesParser(new CommonTokenStream(lexer));
      ParseTree tree = parser.provider();
      ParseTreeWalker walker = new ParseTreeWalker();

      if (generate) {
        walker.walk(new ProbesWalker2(out, outFile), tree);
      } else {
        walker.walk(new ProbesWalker(isLTTngEnabled, isDtraceEnabled, printNames, out), tree);
      }
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
      if (lttng) {
        stream.print("tracepoint" + params);
      }
      stream.println();
      stream.println();
    }
  }

  public static class ProbesWalker2 extends ProbesBaseListener {
    private String provider;
    private String filename;
    private PrintStream stream;

    ProbesWalker2(PrintStream output, String filename) {
      stream = output;
      this.filename = filename;
    }

    private void printTracepoint(String name, List<String> args, List<String> names) {
      stream.println("TRACEPOINT_EVENT(");
      stream.println("  " + provider + ",");
      stream.println("  " + name + ",");
      stream.println("  TP_ARGS(");
      List<String> tp_args = new ArrayList<String>();
      for (int i = 0; i < args.size(); i++) {
        tp_args.add("    " +  args.get(i) + ", " + names.get(i));
      }
      stream.print(String.join(",\n", tp_args));
      stream.println("\n  ),");
      stream.println("  TP_FIELDS(");

      for (int i = 0; i < args.size(); i++) {
        if (args.get(i) == "char*") {
          stream.println("    ctf_string(" + names.get(i) + ", " + names.get(i) + ")");
        } else {
          stream.println("    ctf_integer(uintptr_t, " + names.get(i) + ", (uintptr_t) " + names.get(i) + ")");
        }
      }

      stream.println("  )");
      stream.println(")");
    }

    public void enterProvider(ProbesParser.ProviderContext ctx) {
      provider = ctx.IDENTIFIER().getText();

      stream.println("#if !defined(TRACEPOINT_HEADER_MULTI_READ)\n#define TRACEPOINT_HEADER_MULTI_READ\n#endif\n");
      stream.println("#undef TRACEPOINT_PROVIDER\n#define TRACEPOINT_PROVIDER " + provider  + "\n");
      stream.println("#undef TRACEPOINT_INCLUDE\n#define TRACEPOINT_INCLUDE \"<file location>/" + filename + "\"\n");
      stream.println("#if !defined(HS_JNI__TP_H) || defined(TRACEPOINT_HEADER_MULTI_READ)\n#define HS_JNI__TP_H\n");
      stream.println("#include <lttng/tracepoint.h>");
    }

    public void exitProvider(ProbesParser.ProviderContext ctx) {
      stream.println("#endif\n\n#include <lttng/tracepoint-event.h>\n");
    }

    public void enterProbe(ProbesParser.ProbeContext ctx) {
      String name = ctx.IDENTIFIER().getText();
      
      List<String> args_types = ctx.args.stream().map(i -> i.type().getText()).collect(Collectors.toList());
      List<String> args_names = ctx.args.stream().map(i -> i.name().getText()).collect(Collectors.toList());
      
      printTracepoint(name, args_types, args_names);

      stream.println();
    }    
  }

}
