import java.util.Scanner;

class menudriven {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter your choice:");
        System.out.println("1. Grade Evaluation");
        System.out.println("2. Check Leap Year");
        System.out.println("3. Days of Week");
        System.out.println("4. Data Types");

        int choice = sc.nextInt();

        switch (choice) {

            case 1:
                // Grade evaluation
                int marksInMaths = 80;
                int marksInScience = 85;
                int marksInHistory = 90;

                int average = (marksInMaths + marksInScience + marksInHistory) / 3;

                if (average >= 90) {
                    System.out.println("Grade: A");
                } else if (average >= 70) {
                    System.out.println("Grade: B");
                } else if (average >= 50) {
                    System.out.println("Grade: C");
                } else if (average >= 30) {
                    System.out.println("Grade: D");
                } else {
                    System.out.println("Fail");
                }

                break;

            case 2:
                // Check leap year
                int year1 = 2024;
                int year2 = 1900;

                if ((year1 % 4 == 0 && year1 % 100 != 0) || year1 % 400 == 0) {
                    System.out.println(year1 + " is a leap year");
                } else {
                    System.out.println(year1 + " is not a leap year");
                }

                if ((year2 % 4 == 0 && year2 % 100 != 0) || year2 % 400 == 0) {
                    System.out.println(year2 + " is a leap year");
                } else {
                    System.out.println(year2 + " is not a leap year");
                }

                break;

            case 3:
                // Days of week
                int day = 3;

                if (day == 1) {
                    System.out.println("Monday");
                } else if (day == 2) {
                    System.out.println("Tuesday");
                } else if (day == 3) {
                    System.out.println("Wednesday");
                } else if (day == 4) {
                    System.out.println("Thursday");
                } else if (day == 5) {
                    System.out.println("Friday");
                } else if (day == 6) {
                    System.out.println("Saturday");
                } else if (day == 7) {
                    System.out.println("Sunday");
                } else {
                    System.out.println("Invalid day");
                }

                break;

            case 4:
                // Data types
                byte a = 0;
                short b = 0;
                int c = 0;
                long d = 0;
                float e = 0.0f;
                double f = 0.0;
                char g = '\u0000';
                boolean h = false;

                System.out.println("byte: " + a);
                System.out.println("short: " + b);
                System.out.println("int: " + c);
                System.out.println("long: " + d);
                System.out.println("float: " + e);
                System.out.println("double: " + f);
                System.out.println("char: " + g);
                System.out.println("boolean: " + h);

                break;

            default:
                System.out.println("Exit");
        }

        //sc.close();
    }
}
    