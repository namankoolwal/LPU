import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class colc extends JFrame implements ActionListener{
    JButton b= new JButton("color selection");
    Container c;
    colc(){
        c=getContentPane();
        c.setLayout(new FlowLayout());
        c.add(b);
        b.addActionListener(this);
        
    }
    public void actionPerformed(ActionEvent t){
        Color ic = Color.GREEN;
        Color c1=JColorChooser.showDialog(this,"Your Selected Color Is ", ic);
        c.setBackground(c1);
    }
    public static void main(String args[]){
        colc cc=new colc();
        cc.setSize(400,400);
        cc.setVisible(true);
    }
}
