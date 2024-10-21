// Q2. Write a Java program that takes two command-line arguments: an integer and a string. The program should print the string repeated as many times as the integer specifies.

class Demo {
    public static void main(String args[]) {
        int num = Integer.parseInt(args[0]);
        for (int i = 0; i < num; i++) {
            System.out.println(args[1]);
        }
    }
}