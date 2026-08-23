import java.util.Scanner;
class vowel_String {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
       int count=0;
        System.out.println("Enter a string:");
        String str = sc.nextLine();
         for (int i = 0; i < str.length(); i++) {
            char ch = Character.toLowerCase(str.charAt(i));
            if (ch == 'a' || ch == 'e' || ch == 'i' || 
                ch == 'o' || ch == 'u') {
                count++;
            }
        }
        System.out.println("Number of vowels: " + count);

        sc.close();

    }
}