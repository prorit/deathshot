// Q.1 To apply basic programming constructs like Branching and Looping for solving arithmetic problems using command prompt.

import java.util.Scanner;

public class Arithmetic {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        while (true) {
            System.out.println("Choose an arithmetic operation:");
            System.out.println("1. Addition");
            System.out.println("2. Subtraction");
            System.out.println("3. Multiplication");
            System.out.println("4. Division");
            System.out.println("5. Exit");
            int choice = scan.nextInt();
            if (choice == 5) {
                System.out.println("Exiting the program.");
                break;
            }
            System.out.println("Enter the first number:");
            double num1 = scan.nextDouble();
            System.out.println("Enter the second number:");
            double num2 = scan.nextDouble();
            switch (choice) {
                case 1:
                    System.out.println("Result: " + (num1 + num2));
                    break;
                case 2:
                    System.out.println("Result: " + (num1 - num2));
                    break;
                case 3:
                    System.out.println("Result: " + (num1 * num2));
                    break;
                case 4:
                    if (num2 != 0) {
                        System.out.println("Result: " + (num1 / num2));
                    } else {
                        System.out.println("Error Division by zero is not allowed.");
                        break;
                    }
                default:
                    System.out.println("Invalid choice. Please try again");
            }
            System.out.println("");
        }
        scan.close();
    }
}