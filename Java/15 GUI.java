// Q.15 Develop a Java application that creates a simple graphical user interface (GUI) using Java 
// AWT. The GUI should include basic components such as buttons, text fields, and labels. 
// Implement event handling to respond to user interactions, such as button clicks, by displaying 
// a message or updating the text field content. This program should demonstrate the use of 
// AWT for building GUIs and handling events to make the application interactive.


import java.awt.*;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class GUI {
    public static void main(String[] args) {
        Frame frame = new Frame("EXP 15");
        Label nameL = new Label("Enter your Name");
        nameL.setBounds(50, 50, 120, 30);
        TextField nameF = new TextField();
        nameF.setBounds(180, 50, 100, 30);
        Label rollL = new Label("Enter your Roll no.");
        rollL.setBounds(50, 100, 120, 30);
        TextField rollF = new TextField();
        rollF.setBounds(180, 100, 100, 30);
        Label deptL = new Label("Enter your Department");
        deptL.setBounds(50, 150, 120, 30);
        TextField deptF = new TextField();
        deptF.setBounds(180, 150, 100, 30);
        Label btns = new Label("Details");
        btns.setBounds(100, 210, 100, 30);
        Button btn = new Button("Submit");
        btn.setBounds(100, 190, 100, 20);
        btn.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                btns.setText("Submitted");
            }
        });
        frame.add(nameL);
        frame.add(nameF);
        frame.add(rollL);
        frame.add(rollF);
        frame.add(deptL);
        frame.add(deptF);
        frame.add(btn);
        frame.add(btns);
        // set frame properties
        frame.setSize(400, 300);
        frame.setLayout(null);
        frame.setVisible(true);
    }
}