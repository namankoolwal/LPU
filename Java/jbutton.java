import java.awt.*;
import javax.swing.*;

class jbutton
{
    public static void main(String args[]) {
        JFrame jf = new JFrame("frame");
        JButton jb = new JButton("ok");
        jf.add(jb);
        jf.setSize(300, 300);
        jf.setLayout(new FlowLayout());
        jf.setVisible(true);

    }
}
