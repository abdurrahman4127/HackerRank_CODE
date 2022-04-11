
import java.util.Scanner;


public class CatsAndMouse {
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        
        int numOfQuery = scanner.nextInt();
        for (int i = 0; i < numOfQuery; i++) {
            int cat_A = scanner.nextInt();
            int cat_B = scanner.nextInt();
            int mouse = scanner.nextInt();
            
            int distanceFromCat_A = Math.abs(cat_A - mouse);
            int distanceFromCat_B = Math.abs(cat_B - mouse);
            
            if(distanceFromCat_A < distanceFromCat_B){
                System.out.println("Cat A");
            } else if(distanceFromCat_B < distanceFromCat_A){
                System.out.println("Cat B");
            } else {
                System.out.println("Mouse C");
            }
        }
    }
}
