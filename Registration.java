import java.awt.*;
import java.awt.event.*;
import javax.swing.*;


class Registration extends Frame implements ActionListener
{
	
	  
	JFrame f;
	JLabel l1,l2,l3,l4,l5,l6,l7,l8,l9,l10,l11,l12,l13;
	JTextField t1,t2,t3,t4,t5,t6,t7;
     
	Choice h;
	TextArea ta;
	JButton b1,b2,b3;    
 
 Registration()
 
 {
		f=new JFrame("Registration");
		f.getContentPane().setLayout(null);
		f.getContentPane().setBackground(Color.orange);
		
		l1=new JLabel("student name");
		l1.setBounds(50,50,100,30);
		
		l2=new JLabel("EMAIL ADDRESS");
		l2.setBounds(50,80,100,30);
		
		l3=new JLabel("USER NAME");
		l3.setBounds(50,110,100,30);
		
		l4=new JLabel("Course");
		l4.setBounds(50,140,100,30);
		
		l5=new JLabel("password");
		l5.setBounds(50,170,100,30);
		
		l6=new JLabel("RE-enter");
		l6.setBounds(50,200,100,30);
		
		l7=new JLabel("btech percentage");
		l7.setBounds(250,200,50,30);
		
		l8=new JLabel("Branch");
		l8.setBounds(50,230,100,30);
		
		
		t1=new JTextField(10);
		t1.setBounds(150,50,120,30);
		
		t2=new JTextField(10);
		t2.setBounds(150,80,100,30);
		
		t3=new JTextField(10);
		t3.setBounds(150,110,100,30);
		
		t4=new JTextField(10);
		t4.setBounds(150,170,100,30);
		
		t5=new JTextField(10);
		t5.setBounds(150,200,100,30);
	
		t6=new JTextField(10);
		t6.setBounds(300,200,100,30);
		
		t7=new JTextField(10);
		t7.setBounds(150,230,100,30);
		
		h=new Choice();
		h.setBounds(150,140,100,30);
		h.add("JAVA");
		h.add("RUBY");
            h.add("C++");
h.add("C");
		h.add("HTML");
		b1=new JButton("Insert");
		b1.setBackground(Color.yellow);
		b1.setBounds(50,270,100,30);
		b1.addActionListener(this);
		
		b2=new JButton("Next");
		b2.setBackground(Color.yellow);
		b2.setBounds(160,270,100,30);
		b2.addActionListener(this);
		
		b3=new JButton("Main");
		b3.setBackground(Color.yellow);
		b3.setBounds(270,270,100,30);
		b3.addActionListener(this);


		f.getContentPane().add(l1);
		f.getContentPane().add(l2);
		f.getContentPane().add(l3);
		f.getContentPane().add(l4);
		f.getContentPane().add(l5);
		f.getContentPane().add(l6);
		f.getContentPane().add(l7);
		f.getContentPane().add(l8);
		f.getContentPane().add(t1);
		f.getContentPane().add(t2);
		f.getContentPane().add(t3);
		f.getContentPane().add(t4);
		f.getContentPane().add(t5);
		f.getContentPane().add(t6);
		f.getContentPane().add(t7);
		f.getContentPane().add(h);
		f.getContentPane().add(b1);
		f.getContentPane().add(b2);
		f.getContentPane().add(b3);
		
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
			
}		 
if(e.getSource()==b2)
{
		f.setVisible(false);
		new Personal();
}
	
if(e.getSource()==b3)
{
  f.setVisible(false);
	new Main();
}
	
}
 
 
public static void main(String args[])
{
    new Registration();
}
}