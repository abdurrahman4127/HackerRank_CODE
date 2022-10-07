import java.util.*;

public class NumberLineJumps {
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        
        // kangaroo one
        int x1 = scanner.nextInt();
        int v1 = scanner.nextInt();
        
        // kangaroo two
        int x2 = scanner.nextInt();
        int v2 = scanner.nextInt();
        
        // velocity difference
        int v_diff = v1 - v2;
        
        // position difference
        int x_diff = x1 - x2;
        
        // if velocity difference is less than 0, then no need to continue the program
        if (v_diff <= 0) {
            System.out.println("NO");
            System.exit(0);
        }
        
        /* kangaroos can catch eacg other is their displacement 
        is a multiplicaion of their velocity 
        (i.e. if displacement is divisible by velocity difference ...) */
        
        if(x_diff % v_diff == 0)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}