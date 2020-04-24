export CLASSPATH=".:/usr/local/lib/antlr-4.8-complete.jar:$CLASSPATH"
java -jar /usr/local/lib/antlr-4.8-complete.jar Probes.g4
javac -Xlint:deprecation Probes*.java Main.java

