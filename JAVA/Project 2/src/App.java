import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class App extends JFrame {

    JButton b1,b2;
    JPanel p1,p2;
    
    public App(){
     Container cp=this.getContentPane();
     p1=new JPanel(); p2=new JPanel();
     cp.add(p1, "North"); cp.add(p2, "Center");
     b1=new JButton("노란색");
     b2=new JButton("핑크색");
     p1.add(b1); p1.add(b2);
     p2.setBackground(Color.white);
     
     b1.addActionListener(new ActionListener(){

      public void actionPerformed(ActionEvent e){
       p2.setBackground(Color.yellow);
      }
      
     });
     
     b2.addActionListener(new ActionListener(){
      
      public void actionPerformed(ActionEvent e){
       p2.setBackground(Color.pink);
      }
     });
     
     this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    
    public static void main(String[] args) {
     App my=new App();
     my.setSize(500, 500);
     my.setVisible(true);
     
    }
   }