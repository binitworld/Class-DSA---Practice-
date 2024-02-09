import java.util.Scanner;
import java.util.Arrays;

public class New{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        // int[] arr =  new int[]int[1,2,3,4,5,6,7,8,9,0];
        int[] arr = new int[8];
        for (int i = 0; i < arr.length; i++) {
            System.out.print("Enter the number you Want to search for:");
            arr[i]=in.nextInt();


        }
        System.out.println(Arrays.toString(arr));
    }
}