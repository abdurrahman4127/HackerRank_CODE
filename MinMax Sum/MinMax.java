import java.util.Arrays;
import java.util.Scanner;

public class MinMax {
    public static void main(String[] args)
    {
        int []A = new int[5];
        Scanner scanner = new Scanner(System.in);

        for (int i = 0; i < 5; i++) {
            A[i] = scanner.nextInt();
        }

        Arrays.sort(A);

        long minSum = 0, maxSum = 0;
        for (int i = 0; i < 5-1; i++) {
            minSum += A[i];
        }

        for (int i = 1; i < 5; i++) {
            maxSum += A[i];
        }

        System.out.println(minSum + " " + maxSum);
    }
}
