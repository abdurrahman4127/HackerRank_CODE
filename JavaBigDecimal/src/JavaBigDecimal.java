import java.math.BigDecimal;
import java.util.*;

public class JavaBigDecimal{
    public static void main(String []args)
    {
        Scanner scanner = new Scanner(System.in);
        
        int size = scanner.nextInt();
        String []Str = new String[size];
        
        for(int i=0; i<size; i++){
            Str[i] = scanner.next();
        }
        
        /*
           string values are sorted in place using a comparator that 
           converts two strings into BigDecimal values and then compares them.
        */
        Arrays.sort(Str, 0, size, new Comparator<Object>() {
            public int compare(Object obj1, Object obj2) 
            {
                //converting string into BigDecimal
                BigDecimal bd1 = new BigDecimal((String)obj1); 
                BigDecimal bd2 = new BigDecimal((String)obj2);
                
                // comparing the BigDecimal values
                return bd2.compareTo(bd1);
            }
        });
        
        //Output
        for(int i=0; i<size; i++){
            System.out.println(Str[i]);
        }
    }
}