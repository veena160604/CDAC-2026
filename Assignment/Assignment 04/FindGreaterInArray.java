import java.util.Scanner;
class FindGreaterInArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] arr = new int[5];
        System.out.println("Enter 5 numbers");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt(); 
        }
        //for(int number:arr)
         for (int i = 0; i < arr.length; i++) {
             int max=arr[0];
             if(arr[i]==max){
             System.out.println("The greatest number is "+arr[i]);
             }
        //}
        }
       
        
    }
}