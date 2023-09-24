// implementation of borderlayout
import java.awt.*;
import javax.swing.*;
class Border
{
JFrame jf=new JFrame();
Border()
{
JButton b1=new JButton("Hello");
JButton b2=new JButton("Happy");
JButton b3=new JButton("Day");
jf.setLayout(new BorderLayout(30,20));
jf.add(b1,"North");
jf.add(b2,"Center");
jf.add(b3,"South");
jf.setSize(300,400);
jf.setVisible(true);
}
public static void main(String args[])
{
new Border();
}
}

