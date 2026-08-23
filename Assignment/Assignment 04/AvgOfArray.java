import java.util.Scanner;
class AvgOfArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int sum = 0;
        int avg=0;
        int[] arr = new int[5];
        
        System.out.println("Enter 5 numbers");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt(); 
        }
        // Using the for-each loop to add each element to the sum
        for(int number:arr){
             sum =sum+ number;
             avg=sum/5;
        }
        System.out.println(avg);
        
    }
}