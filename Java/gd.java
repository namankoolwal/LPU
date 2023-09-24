
// import java.awt.*;
import javax.swing.*;
// import javax.swing.border.*;
// import java.awt.event.*;
// import java.awt.Insets;
// import java.awt.Dimension;

class gd 
{
public static void main(String[] args) {
        
    
    JFrame f1= new JFrame("box layout");
    JPanel p1 = new JPanel();
    BoxLayout bx1= new BoxLayout(p1,BoxLayout.PAGE_AXIS);
    p1.setLayout(bx1);
    
    // p1.setBorder(new EmptyBorder(new Insets(100,150,100,150)));
    // p1.setBorder(new EmptyBorder(new Insets(50,70,60,90)));
    
    p1.setSize(300,300);
    JButton b1 = new JButton("good");
    JButton b2 = new JButton("day");
    JButton b3 = new JButton("dear");
    JButton b4 = new JButton("all");
    
    p1.add(b1);
    p1.add(b2);
    p1.add(b3);
    p1.add(b4);
    f1.setSize(400,400);
    f1.add(p1);
    f1.pack(); 
    f1.setVisible(true);
}
}


