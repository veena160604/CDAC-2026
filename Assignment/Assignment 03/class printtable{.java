import java.util.Scanner;
class printtable{
    int printmultiplicationtable(int i){
         Scanner sc=new Scanner(System.in);
        System.out.println("enter a number to print its multiplication table");
        i=sc.nextInt();
        for(int j=1;j<=10;j++){
            System.out.println(i+"*"+j+" = "+(i*j));
        }
        return i;
    }
    public static void main(String[] args){
        printtable obj=new printtable();
        obj.printmultiplicationtable(0);
    }
}