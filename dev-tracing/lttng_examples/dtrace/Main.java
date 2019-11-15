public class Main {

    public Integer bar(Integer n) {
        if (n == 0) {
            return 42;
        }
        return foo(n);
    }

    public Integer foo(Integer n) {
        if (n == 0) {
            return bar(n);
        }
        return foo(n - 1);
    }

    public static void main(String[] args) {
        Main main = new Main();
        System.out.println(main.bar(100));
        System.out.println(main.foo(100));

    }
}
