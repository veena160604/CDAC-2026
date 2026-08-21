import java.util.Scanner;
class enter_positive_number{
    int ask_for_positive_number(int n){
        Scanner sc=new Scanner(System.in);
        do{
            System.out.println("enter a positive number");
            n=sc.nextInt();
        }while(n<=0);
        return n;
    }
public static void main(String[] args){
    enter_positive_number obj=new enter_positive_number();
    int result=obj.ask_for_positive_number(0);
    System.out.println("You entered: " + result);
}
}
