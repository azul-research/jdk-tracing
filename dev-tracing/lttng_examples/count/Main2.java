public class Main {
    public static void floyd(int[][] a, int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                for (int k = 0; k < n; k++) {
                    a[i][j] = Math.min(a[i][j], a[i][k] + a[k][j]);
                }
        }
    
    }


    public static int f(int a) {
        if (a < 1000) {
            return f(a + 1);
        }
        for (int i = 0; i < 10*a; i++);
        return 1;    
    }
    
    public static void main(String[] args) {
        f(42);
        f(1001);
	    f(10000);
	    f(11215);
	    f(124353);
	    f(1000);
	    
        int n = 1000;
        int[][] a = new int[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                if (Math.random() > 0.5)
                    a[i][j] = 1;
                else 
                    a[i][j] = 0;
    }
}
