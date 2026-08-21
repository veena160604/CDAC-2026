import java.util.Scanner;
class check_age_using_methods{
     String age(int age){
        String result=(age<18)?"minor":(age>=18&&age<60)?"adult":"senior citizen";
        return result;
}

static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.println("enter your age");
    int age=sc.nextInt();
    check_age_using_methods obj=new check_age_using_methods();
     System.out.println("you are an "+obj.age(age));
}

}
