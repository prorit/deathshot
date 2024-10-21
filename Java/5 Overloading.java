// Q5. Implement a program to calculate the area and volume of different geometric figures using method overloading. The program should be able to calculate the area and volume of a circle, semicircle, rectangle, triangle and sphere.

public class Overloading {
    public double Area(double rad) {
        return 3.14 * rad * rad;
    }

    public double Area(double rad, boolean b) {
        if (b) {
            return 0.5 * 3.14 * rad * rad;
        }
        return -1;
    }

    // rectangle
    public double Area(double len, double w, int sides) {
        if (sides == 4) {
            return len * w;
        }
        return -1;
    }

    // triangle
    public double Area(double base, double height) {
        return 0.5 * base * height;
    }

    // volume sphere
    public double Volume(double rad) {
        return (double) (4.0 / 3) * 3.14 * rad * rad * rad;
    }

    public static void main(String[] args) {
        Overloading s = new Overloading();
        System.out.println("Area of circle: " + s.Area(5));
        System.out.println("Area of semicircle: " + s.Area(5, true));
        System.out.println("Area of rectangle: " + s.Area(5, 10, 4));
        System.out.println("Area of triangle: " + s.Area(5, 10));
        System.out.println("Volume of sphere: " + s.Volume(5));
    }
}