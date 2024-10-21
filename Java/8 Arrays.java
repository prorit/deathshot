// Q8. Implement a code in Java to manage student grades for a school. The application should 
// utilize both one-dimensional (1D) and two-dimensional (2D) arrays to efficiently store and 
// process data. The 1D array will store the names of the students, allowing for easy retrieval and 
// display of student information. The 2D array will be used to store the grades for multiple 
// subjects for each student, to calculate the average grade per student, determine the highest 
// and lowest grades

import java.util.Scanner;

public class Arrays {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of Students: ");
        int stud = sc.nextInt();
        System.out.println("Enter number of Subjects: ");
        int subj = sc.nextInt();
        String[] StudentName = new String[stud];
        int[][] StudentSubj = new int[stud][subj];
        // studentsName array
        for (int i = 0; i < stud; i++) {
            System.out.println("Enter Name of " + (i + 1) + " Students: ");
            StudentName[i] = sc.next();
        }
        // Students subject grade
        for (int i = 0; i < stud; i++) {
            System.out.println("Enter Grades for " + StudentName[i]);
            for (int j = 0; j < subj; j++) {
                System.out.println("Grades for subject " + (i + 1) + ": ");
                StudentSubj[i][j] = sc.nextInt();
            }
        }
        System.out.println("Students Grades");
        double avgresult;
        double avg;
        int high, low;
        for (int i = 0; i < stud; i++) {
            avgresult = 0;
            avg = 0;
            high = StudentSubj[i][0];
            low = StudentSubj[i][0];
            System.out.print(StudentName[i] + "--");
            for (int j = 0; j < subj; j++) {
                avg = avg + StudentSubj[i][j];
                if (high < StudentSubj[i][j]) {
                    high = StudentSubj[i][j];
                }
                if (low > StudentSubj[i][j]) {
                    low = StudentSubj[i][j];
                }
            }
            avgresult = avg / subj;
            System.out.print(" Average " + avgresult + " Highest " + high + " Lowest " + low);
            System.out.println();
        }
    }
}
