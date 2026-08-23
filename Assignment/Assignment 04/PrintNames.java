import java.util.Scanner;
class PrintNames{
        static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        String[] arr=new String[4];
        System.out.println("Enter 4 names");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextLine();
        }
        for (String names : arr) {
             System.out.println(names);

        }
    }
}