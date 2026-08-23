import java.util.Scanner;
class Find_positive_Negative_In_Array {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[6];
        System.out.println("Enter 6 numbers");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt(); 
        }
       int positiveCount=0;
       int negativeCount=0;
        for(int num:arr){
            if(num>=0){
            positiveCount++;
            }else negativeCount++;

        } 
        System.out.println("Positive numbers: " + positiveCount);
        System.out.println("Negative numbers: " + negativeCount);
    }
}