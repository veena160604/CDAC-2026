import java.util.Scanner;
class SumOfOddNumbers{
    public static void main(String[] args){
        int sum=0;
        int n;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number");
        n=sc.nextInt();
        for(int i=1;i<=n;i++){
            if(i%2!=0){
                sum=sum+i;
            } 
        } System.out.println("Sum= "+sum);

    }
}