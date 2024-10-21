// Q3. Develop a simple library management system in Java. The system will allow users (librarians) to input information about new books being added to the library. You need to create a Library Scanner class that reads and parses different types of input from the user, such as the title of the book, the price of the book, the number of copies available, and the genre of the book
// 1. Implement a method nextLine() to read a line of input as a String
// 2. Implement methods nextDouble(), nextInt(), and NextLine() etc.Create a class Book with attributes title, price, copies Available, and genre, rating grades(A-good, B-Ok, C- Bad). Create a simple demonstration in the main method that prompts the user to enter details for a new book and then displays the entered information.

import java.util.*;

public class Library_Scanner {
    public static void main(String[] args) {
        String name;
        int price;
        int copies;
        char rating;
        Scanner sc = new Scanner(System.in);
        System.out.print("enter name of the book:");
        name = sc.nextLine();
        System.out.print("enter price:");
        price = sc.nextInt();
        System.out.print("enter copies:");
        copies = sc.nextInt();
        System.out.print("enter rating of book:");
        rating = sc.next().charAt(0);
        System.out.println("\nname:" + name + "\nprice:" + price + "\ncopies:" + copies + "\nrating:" + rating);

    }
}