import javax.swing.*;

public class loader extends JFrame {
    JProgressBar jp;

    loader() {
        // jp.setMinimum(10);
        // jp.setMaximum(150);
        jp = new JProgressBar(SwingConstants.VERTICAL,10,100);
        jp.setBounds(50, 50, 150, 150);
        jp.setValue(10);
        jp.setStringPainted(true);
        add(jp);
        setSize(300, 200);
        setVisible(true);
        setLayout(null);
    }

    public void iterate() {
        int j = 0;
        while (j <= 100) {
            jp.setValue(j);
            j = j + 1;
            try {
                Thread.sleep(10);
            } catch (Exception e) {

            }
        }
    }

    public static void main(String args[]) {
        loader p = new loader();
        p.iterate();
    }
}
