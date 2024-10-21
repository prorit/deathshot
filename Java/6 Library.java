// Q6. Implement a java program for a library management system that manages books. The system should include a Book class with attributes such as title, author, isbn, and publishedYear. Implement constructor overloading to allow the creation of Book objects in different ways. One constructor should allow the creation of a Book object with only the title and author, while another constructor should allow the creation of a Book object with title, author, and isbn, and a third constructor should allow the creation of a Book object with all four attributes: title, author, isbn, and publishedYear.

class Book {
    String title;
    String author;
    int isbn;
    String publishedYear;

    Book(String t, String a) {
        title = t;
        author = a;
    }

    Book(String t, String a, int i) {
        title = t;
        author = a;
        isbn = i;
    }

    Book(String t, String a, int i, String p) {
        title = t;
        author = a;
        isbn = i;
        publishedYear = p;
    }

    void print() {
        System.out.println("Title: " + title);
        System.out.println("Author: " + author);
        System.out.println("isbn: " + isbn);

        System.out.println("Published Year: " + publishedYear);
    }
}

public class Library {
    public static void main(String[] args) {
        Book detail = new Book("Gravity", "Newton");
        Book detaill = new Book("Relativity", "Einstein", 23279);
        Book detail2 = new Book("Wave", "Schrodinger", 12643, "23/06/1983");
        detail2.print();
    }
}
