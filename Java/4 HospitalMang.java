// Q4. Implement a simple hospital management system in Java that manages patients, doctors, and appointments. The system should include three main classes: Patient, Doctor, and Appointment. The Patient class should have attributes like patientID, name, age, gender, and contactNumber, with a method displayPatientDetails() to display patient details. The Doctor class should include doctorID, name, specialization, and contactNumber attributes, and a method displayDoctorDetails() to show doctor details. The Appointment class should consist of appointmentID, appointmentDate, doctorRequired and appointmentTime, along with a method displayAppointmentDetails() to display the appointment details along with the patient and doctor details. The Main class should create instances of Patient, Doctor, and Appointment, and use the respective methods to display their details.

// Patient class
class Patient {
    int patientID;
    String name;
    int age;
    String gender;
    String contactNumber;

    // Constructor
    public Patient(int patientID, String name, int age, String gender, String contactNumber) {
        this.patientID = patientID;
        this.name = name;
        this.age = age;
        this.gender = gender;
        this.contactNumber = contactNumber;
    }

    // Method to display patient details
    public void displayPatientDetails() {
        System.out.println("Patient ID: " + patientID);
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Gender: " + gender);
        System.out.println("Contact Number: " + contactNumber);
    }
}

// Doctor class
class Doctor {
    int doctorID;
    String name;
    String specialization;
    String contactNumber;

    // Constructor
    public Doctor(int doctorID, String name, String specialization, String contactNumber) {
        this.doctorID = doctorID;
        this.name = name;
        this.specialization = specialization;
        this.contactNumber = contactNumber;
    }

    // Method to display doctor details
    public void displayDoctorDetails() {
        System.out.println("Doctor ID: " + doctorID);
        System.out.println("Name: " + name);
        System.out.println("Specialization: " + specialization);
        System.out.println("Contact Number: " + contactNumber);
    }
}

// Appointment class
class Appointment {
    int appointmentID;
    String appointmentDate;
    String doctorRequired;
    String appointmentTime;
    Patient patient;
    Doctor doctor;

    // Constructor
    public Appointment(int appointmentID, String appointmentDate, String appointmentTime, Patient patient,
            Doctor doctor) {
        this.appointmentID = appointmentID;
        this.appointmentDate = appointmentDate;
        this.appointmentTime = appointmentTime;
        this.patient = patient;
        this.doctor = doctor;
        this.doctorRequired = doctor.name;
    }

    // Method to display appointment details
    public void displayAppointmentDetails() {
        System.out.println("Appointment ID: " + appointmentID);
        System.out.println("Appointment Date: " + appointmentDate);
        System.out.println("Appointment Time: " + appointmentTime);
        System.out.println("Doctor Required: " + doctorRequired);
        System.out.println("Patient Details: ");
        patient.displayPatientDetails();
        System.out.println("Doctor Details: ");
        doctor.displayDoctorDetails();
    }
}

// Main class to demonstrate the program
public class Exp4 {
    public static void main(String[] args) {
        // Creating instances of Patient
        Patient patient = new Patient(101, "John Doe", 30, "Male", "1234567890");
        // Creating instances of Doctor
        Doctor doctor = new Doctor(201, "Dr. Smith", "Cardiology", "0987654321");
        // Creating instances of Appointment
        Appointment appointment = new Appointment(301, "2024-10-21", "10:00 AM", patient, doctor);
        // Displaying details
        System.out.println("Appointment Details:");
        appointment.displayAppointmentDetails();
    }
}