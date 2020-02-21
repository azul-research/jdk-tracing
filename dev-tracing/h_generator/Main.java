import java.util.*;
import java.io.*;
import java.util.regex.Pattern;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.regex.Matcher;

public class Main {
  public static void main(String[] args) {
    String inFile = args[0];
    String outFile = args[1];
    HashSet<String> argsList = new HashSet<String>(Arrays.asList(args));
    boolean isDtraceEnabled = argsList.contains("dtrace");
    boolean isLTTngEnabled = argsList.contains("lttng");
    
    try (PrintStream out = new PrintStream(new FileOutputStream(outFile, false))) {
      Provider provider = Provider.parseFromFile(inFile);
      if (isDtraceEnabled) {
        out.println("#include \"utilities/dtrace.hpp\";\n");
      }
      if (isLTTngEnabled) {
        out.println("#include \"utilities/lttng.hpp\";\n");
      }
      // provider.print(isDtraceEnabled, isLTTngEnabled, System.out);
      provider.print(isDtraceEnabled, isLTTngEnabled, out);

    } catch (Exception e) {
      System.out.println("Exception! " + e);
    }
  }

  public static class Provider {
    private String name;
    private List<Probe> probes;
    private Provider(String name, List<Probe> probes) {
        this.name = name;
        this.probes = probes;
    }

    public static Provider parseFromFile(String filename) throws IOException {
      Pattern provider_pattern = Pattern.compile("^provider[\\s]*([^\\s]*)[\\s]*\\{");
      Pattern provider_end = Pattern.compile("[\\s]*\\};[\\s]*");
      List<Probe> probes = new ArrayList<Probe>();
      Boolean matching = false;
      String name = "";
      try (BufferedReader bufferedReader = new BufferedReader(new FileReader(filename))) {
        String line;
        while((line = bufferedReader.readLine()) != null) {
          if (matching && provider_end.matcher(line).find()) {
            return new Provider(name, probes);
          }
          if (matching) {
            probes.add(Probe.parseFromText(line));
          }
          Matcher matcher = provider_pattern.matcher(line);
          if (matcher.find()) {
            name = matcher.group(1);
            matching = true;
          }
        }
      } catch (Exception e) {
        System.out.println("Inner Exception! " + e);
      }
      throw new IOException("} not found");
    }

    public void print(boolean printDtrace, boolean printLTTng, PrintStream stream) {
      for (Probe probe : probes) {
        probe.print(name, printDtrace, printLTTng, stream);
      }
    }
  }

  public static class Probe {
    private String name;
    private Integer args_number;

    private Probe(String name, Integer args_number) {
      this.name = name;
      this.args_number = args_number;
    }

    public static Probe parseFromText(String text) {
      Pattern pattern = Pattern.compile("probe ([^\\s]*)\\((.*)\\);");
      Matcher matcher = pattern.matcher(text);
      String name = "probe";
      int args_number = 0;
      while (matcher.find()) {
        name = matcher.group(1);
        String args = matcher.group(2);
        args_number = args.length() == 0 ? 0 : args.split(",").length;
      }
      return new Probe(name, args_number);
    }

    public void print(String provider, boolean printDtrace, boolean printLTTng, PrintStream stream) {
      String probeMacroName = (provider + "_" + name).toUpperCase();
      String args = "";
      for (int i = 0; i < args_number; i++) {
        args += ", arg" + i;
      }
      String params = " (" + provider + ", " + name + args + ")";
      stream.println("#define " + probeMacroName + params + " \\ ");
      if (printDtrace) {
        stream.print(probeMacroName + "_D" + (args_number == 0 ? "" : args_number) + params);
      }
      if (printDtrace && printLTTng) {
        stream.print(" ; ");
      }
      if (printLTTng) {
        stream.print("tracepoint" + params);
      }
      stream.println();
    }
  }
}
