import java.util.Scanner;
    class multiples_of_three{
        public static void main(String[] args){
            int n;
            Scanner sc=new Scanner(System.in);
            System.out.println("Enter a number");
            n=sc.nextInt();
            for(int i=1;i<=n;i++){
               // if(i%3==0){
                    System.out.println(i*3);
                //}
            }
        }
    }