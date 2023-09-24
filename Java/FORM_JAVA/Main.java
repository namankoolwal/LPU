
import java.awt.Color;

import javax.swing.JColorChooser;

public class Main {
    public static void main(String[] argv) {
        Color initialColor = Color.red;
        Color newColor = JColorChooser.showDialog(null, "Dialog Title", initialColor);
    }
}
