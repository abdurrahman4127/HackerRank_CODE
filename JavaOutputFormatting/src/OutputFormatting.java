import java.util.Scanner;

public class OutputFormatting {
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("================================");
        
        for(int i=0; i<3; i++) {
            String str = scanner.next();
            int x = scanner.nextInt();
            
            System.out.printf("%-15s", str);  // exactly 15 charecters
            System.out.printf("%03d%n", x);   // exactly 3 digits
        }
        
        System.out.println("================================");
    }
}
/*
The first column contains the String and is left justified using exactly 15 characters.
The second column contains the integer, expressed in exactly 3 digits; if the original 
input has less than three digits, you must pad your output's leading digits with zeroes.
*/