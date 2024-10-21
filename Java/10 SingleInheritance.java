// Q.10 Develop a Java program to demonstrate single inheritance by creating a base class Vehicle 
// with attributes such as make, model, and year, and methods for setting and retrieving these 
// attributes. Derive a subclass Car from Vehicle to include additional attributes specific to cars, 
// such as numDoors and isConvertible, along with appropriate methods for these attributes. 
// Implement the program to instantiate objects of both classes, set values for their attributes, 
// and display these values to illustrate the inheritance relationship and functionality of the 
// classes.

class Vehicle {
    String make, model;
    int yr;

    void Display(String make, String model, int yr) {
        this.make = make;
        this.model = model;
        this.yr = yr;
        System.out.println("Make : " + make);
        System.out.println("Model : " + model);
        System.out.println("year : " + yr);
    }
}

class Cars extends Vehicle {
    int numDoors;
    String isConvertible;

    void display(String make, String model, int yr, int numDoors, String isConvertible) {
        this.isConvertible = isConvertible;
        this.numDoors = numDoors;
        super.Display(make, model, yr);
        System.out.println("Number of Doors : " + numDoors);
        System.out.println("Convertible : " + isConvertible);
    }
}

public class SingleInheritance {
    public static void main(String[] args) {
        {
            Cars c = new Cars();
            c.display("TATA", "Punch", 2024, 4, "True");
        }
    }
}