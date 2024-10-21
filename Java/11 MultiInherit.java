// Q.11 Develop a Java program that demonstrates multiple inheritance using interfaces by 
// creating two interfaces, Identifiable with a method getId and Nameable with a method 
// getName. Then, create a class Employee that implements both interfaces, providing concrete 
// implementations for the methods and adding additional attributes like employeeId and 
// employeeName. The program should instantiate an Employee object, set values for its 
// attributes, and display these values to illustrate the concept and benefits of multiple 
// inheritance using interfaces in Java.

interface Identifiable {
    String getId();
}

interface Nameable {
    String getName();
}

class Employee implements Identifiable, Nameable {
    String employeeId, employeeName;

    Employee(String employeeId, String employeeName) {
        this.employeeId = employeeId;
        this.employeeName = employeeName;
    }

    public String getId() {
        return employeeId;
    }

    public String getName() {
        return employeeName;
    }

    void display() {
        System.out.println("Employee ID : " + getId());
        System.out.println("Employee Name : " + getName());
    }
}

public class MultiInherit {
    public static void main(String[] args) {
        Employee e = new Employee("Vcet1234", "Keshav Suthar");
        e.display();
    }
}
