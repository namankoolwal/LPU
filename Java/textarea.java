import javax.swing.*;
import java.awt.*;
// import java.awt.Font;
class textarea {
    textarea() {
        JFrame f1 = new JFrame("TextArea Example");
        JTextArea ta = new JTextArea("HELLO EVERYONE ");
        ta.setText("WELL DONE ");
        ta.append("YOU HAVE DONE IT");
        ta.setBounds(200,250,300,300);
        f1.add(ta);
        f1.setLayout(null);
        f1.setSize(400, 450);
        f1.setVisible(true);
        ta.setFont(new Font("Curlz MT",Font.BOLD,30));
        // String msg=ta.getText();
        System.out.println("Entered Text is: "+ta.getText());
      System.out.println(ta.getLineCount());
    }
public static void main(String args[])
{
new textarea();
}
}
