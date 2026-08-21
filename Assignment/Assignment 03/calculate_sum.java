import java.util.Scanner;
class calculateSum{
    void calculateSum(int i){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter a number to calculate Sum");
        i =sc.nextInt();
        int sum=0;
        for(int j=1;j<=i;j++){
            sum=sum+j;
        }
        System.out.println("the sum is: "+sum);
        }
    
    public static void main(String[] args){
        calculateSum obj= new calculateSum();
        obj.calculateSum(0);

    }
}