// import javax.swing.*;
// import java.awt.*;
// import java.awt.event.*;

// public class combo {
//     combo() {
//         JFrame f1 = new JFrame("COMBO EXAMPLE");
//         JButton b = new JButton("select any");
//         JLabel l = new JLabel();
//         b.setBounds(80, 80, 100, 100);
//         String colors[] = { "red", "green", "yellow", "pink", "blue", "white" }; 
//         JComboBox b1 = new JComboBox(colors);
//         b1.setBounds(60, 70, 100, 100);
//         f1.add(b1);
//         f1.add(b);
//         f1.add(l);
//         b1.removeItem("pink");
//         f1.setLayout(new FlowLayout());
//         f1.setSize(400, 450);
//         f1.setVisible(true);

//         b.addActionListener(new ActionListener() {
//             public void actionPerformed(ActionEvent s) {
//             String msg = "Your Selected Color is" + b1.getItemAt(b1.getSelectedIndex());
//             l.setText(msg);
//             }
//         });
//     }

//     public static void main(String arg[]) {
//         new combo();
//     }
// }

// Implementation of combobox without action listener
import javax.swing.*;
import java.awt.*;
class combo
{
combo()
{
JFrame f1=new JFrame("Combo Example");
String colors[]={"Red","Green","Yellow","Pink","Blue","White"};
JComboBox b1=new JComboBox(colors);
b1.setBounds(60,70,100,100);
f1.add(b1);
f1.setLayout(new FlowLayout());
f1.setSize(400,450);
f1.setVisible(true);
}
public static void main(String[] args)
{
new combo();
}
}
