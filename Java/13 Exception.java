
// Q.13 Develop a Java program that demonstrates exception handling by performing the division of two numbers input by the user. The program should use try, catch, finally, throw, and throws to handle potential exceptions, such as division by zero and invalid input. The try block should contain the code that might throw exceptions, catch blocks should handle specific exceptions, finally should execute cleanup code, throw should manually throw an exception for invalid input, and throws should be used in method signatures to indicate the exceptions that might be thrown.

import java.util.Scanner;

class DivisionExceptionDemo {
    // Method for performing division, it throws an ArithmeticException if
    // denominator is 0
    public static double divide(int a, int b) throws ArithmeticException {
        if (b == 0) {
            throw new ArithmeticException("Division by zero is not allowed.");
        }
        return (double) a / b;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        try {
            System.out.print("Enter the numerator: ");
            int a = scanner.nextInt();

            System.out.print("Enter the denominator: ");
            int b = scanner.nextInt();

            // Try dividing the numbers
            double result = divide(a, b);
            System.out.println("Result: " + result);

        } catch (ArithmeticException e) {
            // Handle division by zero
            System.out.println("Error: " + e.getMessage());

        } catch (Exception e) {
            // Handle any other exceptions
            System.out.println("Exception occurred: " + e.getMessage());

        } finally {
            // Cleanup code, will always execute
            System.out.println("Finally block executed. Cleaning up...");
            scanner.close();
        }

        System.out.println("End of program.");
    }
}
