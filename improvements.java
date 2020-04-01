import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
class improvements extends Frame implements ActionListener
{
JFrame f;
JLabel l1,l2;
JTextField t;
List li;
JButton b1,b2;

improvements()
{
	
f=new JFrame("improvements");
f.getContentPane().setLayout(null);
f.getContentPane().setBackground(Color.white);
l1=new JLabel("course id");
l1.setBounds(50,50,60,30);
l2=new JLabel("Changes");
l2.setBounds(50,80,100,30);
t=new JTextField(10);
t.addActionListener(this);
t.setBounds(110,50,150,30);
li=new List();
li.setBounds(50,110,390,180);
b1=new JButton("Check");
b1.setBackground(Color.yellow);
b1.addActionListener(this);
b1.setBounds(70,300,100,30);
b2=new JButton("Back");
b2.setBackground(Color.yellow);
b2.addActionListener(this);
b2.setBounds(210,300,100,30);

f.getContentPane().add(l1);
f.getContentPane().add(l2);
f.getContentPane().add(t);
f.getContentPane().add(li);
f.getContentPane().add(b1);
f.getContentPane().add(b2);
f.setSize(600,600);
f.setVisible(true);

}


public void actionPerformed(ActionEvent e)
{
if(e.getSource()==b1)
{


}

if(e.getSource()==b2)
{
f.setVisible(false);
new Main();
}
}

public static void main(String args[])
{
new improvements();
}

}