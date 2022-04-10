import java.util.Scanner;

public class MilitaryTimeToStandardTime {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String time = scanner.nextLine();

        // hours
        int h1 = (int)time.charAt(0) - '0';
        int h2 = (int)time.charAt(1) - '0';
        int hh = h1*10 + h2 % 10;
        
        if(time.endsWith("AM")){
            if ((hh) == 12) {
                System.out.print("00");
                for (int i = 2; i < time.length() - 2; i++) {
                    System.out.print(time.charAt(i));
                }
            } else {
                for (int i = 0; i < time.length() - 2; i++) {
                    System.out.print(time.charAt(i));
                }
            }
        }

        else if (time.endsWith("PM")) {
            if(hh == 12){
                System.out.print("12");
                for (int i = 2; i < time.length() - 2; i++) {
                    System.out.print(time.charAt(i));
                }
            } else {
                hh = hh + 12;
                System.out.print(hh);
                for (int i = 2; i < time.length() - 2; i++) {
                    System.out.print(time.charAt(i));
                }
            }
        }
    }
}
