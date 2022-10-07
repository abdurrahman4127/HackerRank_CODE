import java.math.BigInteger;
import java.util.Scanner;

public class JavaBigInteger {
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        
        String a = scanner.next();
        String b = scanner.next();
        
        BigInteger bigInt1 = new BigInteger((String) a); 
        BigInteger bigInt2 = new BigInteger((String) b); 
        
        BigInteger add = bigInt1.add(bigInt2);
        BigInteger multiply = bigInt1.multiply(bigInt2);
        
        System.out.println(add);
        System.out.println(multiply);
    }
}
