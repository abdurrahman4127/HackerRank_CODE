import java.util.Scanner;

public class BillDivision {
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt(); // number of items
        int k = scanner.nextInt(); // index of item that anna doesn't eat
        
        int []bill = new int[n];
        for (int i = 0; i < n; i++) {
            bill[i] = scanner.nextInt();   // the item prices
        }
        
        // amount anna was charged with
        int charge = scanner.nextInt();
        
        int billActual = 0;
        for(int i=0; i<n; i++){
            if(i == k)
                continue;     // skipping the item anna doesn't eat
            billActual += bill[i];   
        }                
        
        //System.out.println("to pay : " + billActual);
        
        if(charge == (billActual/2)){   // if shares equal half, it's fair 
            System.out.println("Bon Appetit");
        } else { 
            System.out.println(charge - (billActual/2)); // amaount nna was extra charged with
        }
    }
}
/* 
input:
4 1
3 10 2 9
7

output:
Bon Appetit
*/

/*
input:
4 1
3 10 2 9
12

output:
5
*/