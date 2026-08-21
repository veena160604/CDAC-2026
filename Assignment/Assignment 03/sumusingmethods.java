import java.util.Scanner;
class sum_using_method{
    static int sum(int a,int b){
        return a+b;
    }
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the first number");
        int a=sc.nextInt();
        System.out.println("enter the second number");
        int b=sc.nextInt();
       // sum_using_method obj=new sum_using_method();
        int result=sum(a,b);
        System.out.println("the sum of given two numbers is: "+result);

    }
}