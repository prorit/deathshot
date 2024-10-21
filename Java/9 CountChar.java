// Q9. Develop a Java application that reads user-inputted sentences and performs various string 
// manipulation tasks. The application should count characters, reverse sentences, find 
// substrings, convert to uppercase and lowercase, remove whitespace, replace characters, and 
// check for palindromes. Utilize appropriate methods from the String, StringBuilder, and 
// StringBuffer classes to ensure efficient and effective handling of these operations, displaying 
// the results in a clear, user-friendly manner

import java.util.*;

public class CountChar {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int ch;
        System.out.print("Enter a string : ");
        String in = sc.nextLine();
        do {
            System.out.println(
                    "\n1. Length of String\n2. Reverse the String\n3. Substring\n4. Convert to Uppercase\n5. Convert to Lowercase\n6. Remove Whitespace\n7. Replace Character\n8. Check Palindrome\n9. Exit");
            System.out.println("Enter your choice: ");
            ch = sc.nextInt();
            switch (ch) {
                case 1: {
                    System.out.println("String length : " + in.length());
                    break;
                }
                case 2: {
                    StringBuffer s = new StringBuffer(in);
                    System.out.println("String Reverse : " + s.reverse());
                    break;
                }
                case 3: {
                    System.out.print("Enter the starting and ending index for the substring : ");
                    int a = sc.nextInt();
                    int b = sc.nextInt();
                    System.out.println("String Substring : " + in.substring(a, b));
                    break;
                }
                case 4: {
                    System.out.println("String Uppercase : " + in.toUpperCase());
                    break;
                }
                case 5: {
                    System.out.println("String Lowercase : " + in.toLowerCase());
                    break;
                }
                case 6: {
                    System.out.println("String Trim : " + in.trim());
                    break;
                }
                case 7: {
                    System.out.println("Enter the character to replace:");
                    char oldChar = sc.next().charAt(0);
                    System.out.println("Enter new character to replace:");
                    char newChar = sc.next().charAt(0);
                    System.out.println("\nString after replacing '" + oldChar + "' with '" + newChar + "' is: "
                            + in.replace(oldChar, newChar));
                    break;
                }
                case 8: {
                    StringBuffer s = new StringBuffer(in);
                    String reverseString = s.reverse().toString();
                    if (in.equals(reverseString)) {
                        System.out.println("\nString is a Palindrome.");
                    } else {
                        System.out.println("\nString is not a Palindrome.");
                    }
                    break;
                }
                case 9: {
                    System.out.println("Exit....");
                    break;
                }
                default:
                    System.out.println("Invaild choices");
            }
        } while (ch != 9);
    }
}