
import java.util.Scanner;

public class MigratoryBird {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // number of birds
        int n = scanner.nextInt();
        int []birdID = new int[n];

        // IDs of each type of bird
        for (int i = 0; i < n; i++) {
            birdID[i] = scanner.nextInt();
        }
        
        
        /* there are 5 types of bird, but array indexing starts 
           from 0, so for convention, frequency is of size 6 here. */
        int []frequency = new int[6];
        for (int i = 0; i < n; i++) 
        {
            int index = birdID[i]; 
            frequency[index]++; //incrementing the occurrence in the frequency table
        }
        
        
        // max occurrence (frequency)
        int maxType = 1;
        int maxFreq = frequency[1];
        
        for (int i = 2; i < 6; i++) {   // imagined maxType is 1, so iterating from 2
            if(frequency[i] > maxFreq){
                maxType = i;
                maxFreq = frequency[i];
            }
        }
        
        System.out.println(maxType);  // not max frequency
    }
}
