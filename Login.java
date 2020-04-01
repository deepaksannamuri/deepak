import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
class  Login extends Frame implements ActionListener
{

JFrame f;
JLabel l1,l2,l3;
JTextField t,t1,t2;
JButton b1,b2;

Login()
{
	
  f=new JFrame("Course Details");
  f.getContentPane().setLayout(null);
  f.getContentPane().setBackground(Color.blue);
  
  l1=new JLabel("user name");
  l1.setBounds(50,50,100,30);
  
  l2=new JLabel("password");
  l2.setBounds(50,80,100,30);
  
  l3=new JLabel("registration date");
  l3.setBounds(50,110,100,30);
   
  
  
  
  
  t=new JTextField(10);
  t.addActionListener(this);
  t.setBounds(150,50,140,30);
  
  t1=new JTextField(10);
  t1.addActionListener(this);
  t1.setBounds(150,80,140,30);
  
  t2=new JTextField(10);
  t2.addActionListener(this);
  t2.setBounds(150,110,140,30);
  
 
  b1=new JButton("Submit");
  b1.setBackground(Color.yellow);
  b1.addActionListener(this);
  b1.setBounds(70,300,100,30);
 
  b2=new JButton("Back");
  b2.setBackground(Color.yellow);
  b2.addActionListener(this);
  b2.setBounds(210,300,100,30);

f.getContentPane().add(l1);
f.getContentPane().add(l2);
f.getContentPane().add(l3);
f.getContentPane().add(t);
f.getContentPane().add(t1);
f.getContentPane().add(t2);
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
new Login();
}

}