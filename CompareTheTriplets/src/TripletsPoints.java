import java.util.Scanner;

public class TripletsPoints {
    public static void main(String[] args)
    {
        int []A = new int[3];
        int []B = new int[3];

        Scanner scanner = new Scanner(System.in);
        for (int i = 0; i < 3; i++) {
            A[i] = scanner.nextInt();
        }

        for (int i = 0; i < 3; i++) {
            B[i] = scanner.nextInt();
        }

        int a = 0, b = 0;
        for (int i = 0; i < 3; i++) {
            if(A[i] > B[i]){
                a++;
            } else if (B[i] > A[i]) {
                b++;
            }
        }

        System.out.println(a + " " + b);
    }
}
