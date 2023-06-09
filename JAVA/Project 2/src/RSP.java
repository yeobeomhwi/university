import java.awt.*;
import javax.swing.*;
import java.awt.event.*;
import java.util.Random;

public class RSP extends JFrame implements ActionListener{
    static final int ROCK=0, PAPER=1, SCISSOR=2;
    private JButton rock, paper , scissor;
    private JTextField output, infor;
    private JPanel panel;

    public RSP(){
        setTitle("가위,바위,보");
        setSize(400,300);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        panel = new JPanel();
        panel.setLayout(new GridLayout(0,3));
        infor = new JTextField("아래의 버튼 중에서 하나를 클릭하시오");
        output = new JTextField(20);
        rock = new JButton("주먹");
        paper = new JButton("보");
        scissor = new JButton("가위");
        rock.addActionListener(this);
        paper.addActionListener(this);
        scissor.addActionListener(this);
        panel.add(rock); panel.add(paper); panel.add(scissor);
        add(infor, BorderLayout.NORTH);
        add(panel, BorderLayout.CENTER);
        add(output,BorderLayout.SOUTH);
        setVisible(true);
    }
    public static void main(String[] args){
        new RSP();
    }
    @Override
    public void actionPerformed(ActionEvent e){
        Random random = new Random();
        int computer = random.nextInt(3);
        if(e.getSource()==rock){
            if(computer == SCISSOR) output.setText("컴퓨터: 가위 | 사용자: 주먹 [사용자 WIN]");
            else if (computer == ROCK) output.setText("컴퓨터: 주먹 | 사용자: 주먹 [비김]");
            else output.setText("컴퓨터: 보 | 사용자: 주먹 [컴퓨터 WIN]");
        }else if(e.getSource()== paper){
            if(computer == ROCK) output.setText("컴퓨터: 주먹 | 사용자: 보 [사용자 WIN]");
            else if (computer == PAPER) output.setText("컴퓨터: 보 | 사용자: 보 [비김]");
            else output.setText("컴퓨터: 가위 | 사용자: 보 [컴퓨터 WIN]");
        }else if(e.getSource()== scissor){
            if(computer == PAPER) output.setText("컴퓨터: 보 | 사용자: 가위 [사용자 WIN]");
            else if (computer == SCISSOR) output.setText("컴퓨터: 가위 | 사용자: 가위 [비김]");
            else output.setText("컴퓨터: 주먹 | 사용자: 가위 [컴퓨터 WIN]");
        }
    }
}
