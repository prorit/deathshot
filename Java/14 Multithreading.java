// Q.14 Develop a Java program that demonstrates multithreading by creating three separate 
// threads, each responsible for displaying the multiplication table of a different number (e.g., 3, 
// 6, and 9). Each thread should generate and print the multiplication table for its respective 
// number up to 10. The program should illustrate the concept of multithreading by concurrently 
// running these threads to display the results.

class Mt extends Thread {
    int n;

    public Mt(int n) {
        this.n = n;
    }

    public void run() {
        for (int i = 1; i <= 10; i++) {
            System.out.println("Multiplication of " + n + " X " + i + " = " + n * i);
        }
    }
}

public class Multithreading {
    public static void main(String[] args) {
        Mt t3 = new Mt(3);
        Mt t6 = new Mt(6);
        Mt t9 = new Mt(9);
        t3.start();
        t6.start();
        t9.start();
    }
}
