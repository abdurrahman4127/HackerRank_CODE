import java.util.Scanner;

public class DesignPDF_Viewer {
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
       
        // scanning the values
        int []H =  new int[26];
        for (int i = 0; i < H.length; i++) {
            H[i] = scanner.nextInt();
        }
        
        scanner.nextLine();
        
        // scanning the word
        String word = scanner.nextLine();
        
        // ascii value of charecters
        int wordLenght = word.length();
        for (int i = 0; i < wordLenght; i++) {
//            System.out.println("ascii val: " + (int)word.charAt(i));
        }
        
        int Position[] = new int[wordLenght];
        // letters' positions in the alphabet
        for (int i = 0; i < wordLenght; i++) {
            Position[i]= word.charAt(i) - 'a' + 1;
//            System.out.println(word.charAt(i) - 'a' + 1);
        }
        
        /*
        in B[] array, i stored the value of the index corresponding the input letter
        
        for instance, 
        input: 1 2 6 7 abcd
        position[a] = 1 ; because word.charAt(0) - 'a' + 1) = 1
        position[b] = 2
        position[c] = 6 ; because word.charAt(2) - 'a' + 1) = 6
        position[d] = 4 ; because word.charAt(3) - 'a' + 1) = 7
        
        if(1 == 1){
          B[0] = (int)word.charAt(i) = 1
          B[1] = (int)word.charAt(i) = 2
          B[2] = (int)word.charAt(i) = 6
          B[3] = (int)word.charAt(i) = 7
        } 
        
        */
        int []B = new int[wordLenght];
        for(int i = 0; i < wordLenght; i++) {
            if(Position[i] == (word.charAt(i) - 'a' + 1)){
                B[i] = (int)word.charAt(i);
            }
        }
        
        // height of the tallest letter
        int max = H[0];
        for (int i = 1; i < H.length; i++) {
            if(max < H[i]){
                max = H[i];
            }
        }
        
        int selectionArea = max * wordLenght;
        System.out.println(selectionArea);        
    }
}