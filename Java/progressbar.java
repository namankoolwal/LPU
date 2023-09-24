import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
public class progressbar extends JFrame {
        // create a frame
        static JFrame jf;
        static JProgressBar jb;
        public static void main(String args[])
        {
                // create a frame
                jf = new JFrame("ProgressBar with string message");
                // create a panel
                JPanel jp = new JPanel();
                // create a progressbar
                jb = new JProgressBar();
                // set initial value
                jb.setValue(0);
                jb.setStringPainted(true);
                // add progressbar
                jp.add(jb);
                jf.add(jp);
                jf.setSize(500, 500);
                jf.setVisible(true);
//new progress();
                fill();
        }
        // function to increase progress
        public static void fill()
        {
                int i = 0;
                try {
                        while (i <= 100) {
                                // set text according to the level to which the bar is filled
                                if (i > 30 && i < 70)
                                        jb.setString("wait for sometime");
                                else if (i > 70)
                                        jb.setString("almost finished loading");
                                else
                                        jb.setString("abt to start");
                                // fill the menu bar
                                jb.setValue(i + 10);
                                // delay the thread
                                Thread.sleep(3000);
                                i += 20;
                        }
                }
                catch (Exception e) {
                }
        }
}

