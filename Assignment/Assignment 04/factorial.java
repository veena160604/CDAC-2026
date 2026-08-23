import java.util.Scanner;
public class factorial{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int factorial = 1;
        int n;
        System.out.println("Enter a number");
        n=sc.nextInt();
        for(int i=n;i>=1;i--){
        factorial=factorial*i; 
        } System.out.println(factorial);
    }
}