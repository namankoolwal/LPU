import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class card extends JFrame implements ActionListener 
{
CardLayout c1 = new CardLayout(30,20);
Container c2 ;
card()
{
c2 = getContentPane();
c2.setLayout(c1);
JButton b1 = new JButton("my");
JButton b2 = new JButton("day");
JButton b3 = new JButton("good");
JButton b4 = new JButton("great");
b1.addActionListener(this);
b2.addActionListener(this);
b3.addActionListener(this);
b4.addActionListener(this);
c2.add(b1);
c2.add(b2);
c2.add(b3);
c2.add(b4);


}
public void actionPerformed(ActionEvent a)
{
    c1.next(c2);
}
public static void main(String arg[])
{
 card g1=  new card(); 
 g1.setSize(300, 200);
 g1.setVisible(true); 
}
}
    

