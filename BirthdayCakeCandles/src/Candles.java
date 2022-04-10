import java.util.Scanner;

public class Candles {
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        int size = scanner.nextInt();
        int []A = new int[size];

        for (int i = 0; i < A.length; i++) {
            A[i] = scanner.nextInt();
        }

        int tallest = A[0];
        for (int i = 1; i < A.length; i++) {
            if(A[i] > tallest){
                tallest = A[i];
            }
        }

        int numOfTallestCandle = 0;
        for (int i = 0; i < A.length; i++) {
            if(A[i] == tallest)
                numOfTallestCandle++;
        }

        System.out.println(numOfTallestCandle);
    }
}