import java.util.Random;
import java.util.concurrent.TimeUnit;

public class MatrixMultiDouble {
    public static void main(String[] args) {
        Random random = new Random();
        long startTime = System.nanoTime();
        long endTime = System.nanoTime();
        long timeElapsed = endTime - startTime;
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();

        double[][] Arr1 = new double[n][n];
        double[][] Arr2 = new double[n][n];
        double[][] Ans = new double[n][n];
        int joy = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                Arr1[i][j] = random.nextInt(10);
                Arr2[i][j] = random.nextInt(10);
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                joy = 0;
                for (int k = 0; k < n; k++) {
                    joy += Arr1[i][k] * Arr2[k][j];
                }
                Ans[i][j] = joy;
                System.out.print(Ans[i][j] + " ");
            }
        }  
        System.out.println(" ");
        System.out.println("Elapsed time in nanoseconds: "+timeElapsed);
    }
    
}
