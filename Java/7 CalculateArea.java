// Q7. Create a user-defined package Calculate. This package must contain classes that calculate the area of square, triangle, rectangle, semicircle, and cylinder. Import the package and use these classes in another program that displays the areas of the above-mentioned shapes.

class calc {
    public void areaSquare(int s) {
        System.out.println("Area of square:" + s * s);
    }

    public void areaTriangle(int b, int h) {
        System.out.println("Area of triangle:" + (0.5 * b * h));
    }

    public void areaRectangle(int l, int b) {
        System.out.println("Area of rectangle:" + (l * b));
    }

    public void areaSemicircle(int r) {
        System.out.println("Area of semicirclea:" + (0.5 * Math.PI * r * r));
    }

    public void areaCylinder(int r, int h) {
        System.out.println("Area of Cylinder:" + 2 * Math.PI * r * (r + h));
    }
}

public class CalculateArea {

    public static void main(String[] args) {

        calc obj = new calc();
        obj.areaSquare(9);

        obj.areaTriangle(3, 9);
        obj.areaRectangle(2, 7);
        obj.areaSemicircle(6);
        obj.areaCylinder(13, 10);
    }
}