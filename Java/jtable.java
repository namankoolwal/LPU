
// ************************************************************
import javax.swing.*;
import java.awt.*;

class jtable {
    jtable() {
        JFrame f1 = new JFrame("Table Example");
        Integer i[][] = {
                { 11, 22, 33 }, { 22, 33, 44 }, { 1, 2, 3 } };
        String c[] = { "age", "marks", "roll" };
        JTable t1 = new JTable(i, c);

        t1.setBounds(60, 70, 100, 100);
        t1.setCellSelectionEnabled(true);
        f1.add(t1);
        f1.setLayout(new FlowLayout());
        f1.setSize(400, 450);
        f1.setVisible(true);
    }

public static void main(String args[])
{
new jtable();
}
}
