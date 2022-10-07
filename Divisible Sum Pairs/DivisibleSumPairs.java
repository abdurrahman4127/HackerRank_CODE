import java.util.Scanner;

public class DivisibleSumPairs {
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        int k = scanner.nextInt();

        int []A = new int[n];
        for (int i = 0; i < A.length; i++) {
            A[i] = scanner.nextInt();
        }
        
        int pairs = divisibleSumPairs(A, k);
        System.out.println(pairs);
    }

    static int divisibleSumPairs(int[] A, int k) {
        int pairs = 0;
        
        for (int i = 0; i < A.length; i++) {  // better if go with (i < A.length - 1)
            for (int j = i+1; j < A.length; j++) {
                if((A[i] + A[j]) % k == 0){
                    pairs++;
                }
            }
        }
        
        return pairs;
    }
}
