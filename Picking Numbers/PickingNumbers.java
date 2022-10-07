import java.util.Scanner;

public class PickingNumbers {
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int[] A = new int[n];

        for(int i = 0; i < n; i++){
            A[i] = scanner.nextInt();
        }

        // frequency array of A[n]
        int[] freq = new int[100];
        for(int i = 0; i < n; i++) {
            int index = A[i];
            freq[index]++;
        }

        // length of the longest sub-array
        int length = 0;

        /*  iterating until (i < freq.length-1)
            because we are finding the max value between 'length' and 'freq[i]+freq[i+1]'
            freq[i]+freq[i+1] - sum of 1st and 2nd index;
            it'd go index-out -of-bound, if it wasn't 'i < freq.length-1' */

        for(int i = 0; i < freq.length-1; i++) {
            length = Math.max(length, freq[i]+freq[i+1]);
        }

        System.out.println(length);
    }
}