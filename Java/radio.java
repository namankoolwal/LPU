import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.*;

public class radio extends JFrame {
    JRadioButton b1 = new JRadioButton();
    JRadioButton b2 = new JRadioButton();
    JRadioButton b3 = new JRadioButton();
    JButton jb = new JButton("Select");
    ButtonGroup g;
    JLabel l;

    radio(){
        g= new ButtonGroup();
        l= new JLabel("Courses");
        b1.setText("Java");
        b2.setText("C++");
        b3.setText("Python");
        b1.setBounds(100, 40, 100, 50);
        b2.setBounds(150, 60, 150, 70);
        b1.setBounds(170, 80, 170, 90);
        jb.setBounds(40, 50,90,100);
        l.setBounds(20,30,60,80);
        this.add(b1);
        this.add(b2);
        this.add(b3);
        this.add(jb);
        this.add(l);
        // this.setLayout(new FlowLayout());
        g.add(b1);
        g.add(b2);
        g.add(b3);
        jb.addActionListener(new ActionListener() {
            public void actionPerformed (ActionEvent e){
                String s= "";
                if (b1.isSelected())
                s="you are having interest in java";
                else if(b2.isSelected())
                s="you are having interest in c++";
                else if(b3.isSelected())
                s="you are having interest in python";
                else{
                s="you have not selected any option";
                }
                JOptionPane.showMessageDialog(radio.this,s);
            }
        });
    }
}

class R_Button {
    public static void main(String args[]) {
        radio bb = new radio();
        bb.setBounds(80, 90, 100, 110);
        bb.setVisible(true);
        bb.setLayout(new FlowLayout());
    }
}
