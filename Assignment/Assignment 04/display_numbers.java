import java.util.Scanner;
class Display_numbers{
    static void main(String[] args){
        int n;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number");
        n=sc.nextInt();
        for(int i=1;i<=n;i++){
            System.out.println(i);
        }

    }
}
