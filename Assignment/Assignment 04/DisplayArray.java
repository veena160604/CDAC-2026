import java.util.Scanner;
class DisplayArray{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int[] arr=new int[5];
        System.out.println("Enter 5 numbers");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }
        for (int number : arr) {
             System.out.println(number);

        }
    }
}