import java.math.BigInteger;
import java.util.Scanner;

public class BigNumberPrimality {
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        
//        String str = scanner.next();
        BigInteger n = new BigInteger((String) scanner.next()); // scanning and converting a string into BIgInteger
        
        if(n.isProbablePrime(1000))
            System.out.println("prime");
        else
            System.out.println("not prime");
    }
}
