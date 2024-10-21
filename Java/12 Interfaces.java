//Q.12 Develop a Java application that demonstrates the implementation of interfaces in objectoriented programming within a travel booking system. Create two interfaces, Bookable with a 
// method book and Cancellable with a method cancel. Then, create classes Flight and Hotel that 
// implement both interfaces, providing concrete implementations for these methods and 
// adding additional attributes like flightNumber, hotelName, bookingStatus, and 
// cancellationPolicy. The program should instantiate objects of both classes, set values for their 
// attributes, invoke the interface methods, and display the results to illustrate the concept and 
// benefits of using interfaces for defining contracts in a travel booking context.

interface Bookable {
    void book();
}

interface Cancellable {
    void cancel();
}

class Flight implements Bookable, Cancellable {
    String flightNumber, bookingStatus, cancellationPolicy;

    Flight(String flightNumber, String bookingStatus, String cancellationPolicy) {
        this.flightNumber = flightNumber;
        this.bookingStatus = bookingStatus;
        this.cancellationPolicy = cancellationPolicy;
    }

    public void book() {
        System.out.println("Booking Status :" + bookingStatus);
    }

    public void cancel() {
        System.out.println("Cancellation Status :" + cancellationPolicy);
    }

    void flight() {
        System.out.println("Flight details :\n");
        System.out.println("Flight Number : " + flightNumber);
        book();
        cancel();
    }
}

class Hotel implements Bookable, Cancellable {
    String hotelName, bookingStatus, cancellationPolicy;

    Hotel(String hotelName, String bookingStatus, String cancellationPolicy) {
        this.hotelName = hotelName;
        this.bookingStatus = bookingStatus;
        this.cancellationPolicy = cancellationPolicy;
    }

    public void book() {
        System.out.println("Booking Status :" + bookingStatus);
    }

    public void cancel() {
        System.out.println("Cancellation Status :" + cancellationPolicy);
    }

    void hotel() {
        System.out.println("Hotel details :\n");
        System.out.println("Hotel Name : " + hotelName);
        book();
        cancel();
    }
}

public class Interfaces {
    public static void main(String[] args) {
        Flight f = new Flight("BOM123", "Confrimed", "Not applicable");
        f.flight();
        Hotel h = new Hotel("Taj Hotel", "Confrimed", "Applicable");
        h.hotel();
    }
}