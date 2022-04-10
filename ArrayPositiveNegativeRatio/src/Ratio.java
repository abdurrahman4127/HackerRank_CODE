import java.util.Scanner;

public class Ratio {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        float positive = 0, negative = 0, zero = 0;

        int size = scanner.nextInt();
        int []A = new int[size];

        // scanning the array
        for (int i = 0; i < size; i++) {
            A[i] = scanner.nextInt();
        }

        // negative number present in the array
        for (int i = 0; i < size; i++) {
            if(A[i] < 0)
                negative++;
        }

        // negative number present in the array
        for (int i = 0; i < size; i++) {
            if(A[i] > 0)
                positive++;
        }

        // negative number present in the array
        for (int i = 0; i < size; i++) {
            if(A[i] == 0)
                zero++;
        }

        System.out.printf("%f \n", positive/size);
        System.out.printf("%f \n", negative/size);
        System.out.printf("%f \n", zero/size);
    }
}
