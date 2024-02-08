import java.util.Scanner;

public class Sum{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the First number You Want to add:");
        int a = in.nextInt();
        System.out.print("Enter the Second number You Want to add:");
        int b = in.nextInt();

        int c = a+b;

        System.out.println("The resulted output Will Be :"+  c );
    }
}