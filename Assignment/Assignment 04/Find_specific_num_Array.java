import java.util.Arrays;
import java.util.Scanner;
class Find_specific_num_Array{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
       Integer[] arr=new Integer[5];
        int num ;
        System.out.println("Enter 5 numbers");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
         System.out.println("Enter number to search");
        num=sc.nextInt();

        if (Arrays.asList(arr).contains(num)) {
            System.out.println("Found");
        } else {
            System.out.println("Not Found");
        }

        sc.close();
    }
}