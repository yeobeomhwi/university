import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class MovingImage extends JPanel implements ActionListener, KeyListener {
    private int x, y;
    private int deltaX, deltaY;
    private Image image;

    public MovingImage(Image image) {
        this.image = image;
        x = (getWidth() - image.getWidth(null)) / 2;
        y = (getHeight() - image.getHeight(null)) / 2;

        Timer timer = new Timer(10, this);
        timer.start();

        addKeyListener(this);
        setFocusable(true);
    }

    public void paintComponent(Graphics g) {
        super.paintComponent(g);
        g.drawImage(image, x, y, null);
    }

    public void actionPerformed(ActionEvent e) {
        x += deltaX;
        y += deltaY;

        if (x < 0) {
            x = 0;
        } else if (x > getWidth() - image.getWidth(null)) {
            x = getWidth() - image.getWidth(null);
        }

        if (y < 0) {
            y = 0;
        } else if (y > getHeight() - image.getHeight(null)) {
            y = getHeight() - image.getHeight(null);
        }

        repaint();
    }

    public void keyPressed(KeyEvent e) {
        int keyCode = e.getKeyCode();

        if (keyCode == KeyEvent.VK_LEFT) {
            deltaX = -5;
        } else if (keyCode == KeyEvent.VK_RIGHT) {
            deltaX = 5;
        } else if (keyCode == KeyEvent.VK_UP) {
            deltaY = -5;
        } else if (keyCode == KeyEvent.VK_DOWN) {
            deltaY = 5;
        }
    }

    public void keyReleased(KeyEvent e) {
        int keyCode = e.getKeyCode();

        if (keyCode == KeyEvent.VK_LEFT || keyCode == KeyEvent.VK_RIGHT) {
            deltaX = 0;
        } else if (keyCode == KeyEvent.VK_UP || keyCode == KeyEvent.VK_DOWN) {
            deltaY = 0;
        }
    }

    public void keyTyped(KeyEvent e) {}

    public static void main(String[] args) {
        JFrame frame = new JFrame("Moving Image");
        Image image = new ImageIcon("C:/Users/여범휘/Desktop/university/JAVA/Project 2/src/image.png").getImage();
        MovingImage movingImage = new MovingImage(image);
        frame.add(movingImage);
        frame.setSize(1000, 1000);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
