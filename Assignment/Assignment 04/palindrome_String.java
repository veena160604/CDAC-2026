import java.util.Scanner;
class palindrome_String {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string:");
        String s1 = sc.nextLine();
        String reverse = "";
        for (int i = s1.length() - 1; i >= 0; i--) {
             reverse = reverse + s1.charAt(i);
        
        }if(s1.equals(reverse)){
            System.out.println("the string "+s1+" is palindrome");
        }else{
            System.out.println("the string "+s1+"is palindrome");
        }
    }
}