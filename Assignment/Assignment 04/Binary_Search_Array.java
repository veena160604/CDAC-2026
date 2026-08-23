import java.util.Arrays;
import java.util.Scanner;
class Binary_Search_Array{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
       int[] arr=new int[5];
        System.out.println("Enter 5 numbers");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
         System.out.println("Enter number to search");
        int num=sc.nextInt();
        // sort the array
        Arrays.sort(arr);
        int index = Arrays.binarySearch(arr, num);
        if (index>=0) {
            System.out.println("Index: " +index);
        } else {
            System.out.println("Not Found");
        }

        sc.close();
    }
}