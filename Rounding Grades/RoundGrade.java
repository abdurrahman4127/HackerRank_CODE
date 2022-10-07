import java.util.Scanner;

public class RoundGrade {
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int []A = new int[n];

        for (int i = 0; i < A.length; i++) {
            A[i] = scanner.nextInt();
        }

        for (int i = 0; i < A.length; i++)
        {
            if(A[i] > 37) {
                if((A[i] % 5) == 3){
                    A[i] += 2;
                } else if ((A[i] % 5) == 4) {
                    A[i] += 1;
                }
            }
        }

        for (int i = 0; i < A.length; i++) {
            System.out.println(A[i]);
        }
    }
}