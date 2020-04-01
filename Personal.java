import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

 class Personal extends Frame implements ActionListener
 {
	JFrame f;
	JLabel l1,l2,l3,l4,l5,l6;
	JTextField t1,t2,t3,t4;
	JButton b1,b2,b3;
	Checkbox c1,c2,c3,c4,c5;
	CheckboxGroup cbg;
	JTextField ta;
	
	Personal()
   {
	 
		f=new JFrame("Personal");
		f.getContentPane().setBackground(Color.green);
		
		l1=new JLabel("course Id");
		l1.setBounds(50,50,100,30);
		t1=new JTextField(10);
		t1.setBounds(170,50,100,30);
		
		l2=new JLabel("Name of student");
		l2.setBounds(50,80,120,30);
		t2=new JTextField(10);
		t2.setBounds(170,80,100,30);
		
		l3=new JLabel("Age");
		l3.setBounds(50,130,100,30);
		t3=new JTextField(10);
		t3.setBounds(150,130,50,30);
		
		l4=new JLabel("Gender");
		l4.setBounds(350,130,50,30);
		
		
		
		l5=new JLabel("Address");
		l5.setBounds(50,170,150,30);
		ta=new JTextField(10);
        ta.setBounds(150,170,150,30);

		
		l6=new JLabel("Catagory");
		l6.setBounds(50,240,100,30);
		
		b1=new JButton("More");
		b1.setBackground(Color.yellow);
		b1.addActionListener(this);
		b1.setBounds(50,330,100,30);
		b2=new JButton("Save");
		b2.setBackground(Color.yellow);
		b2.addActionListener(this);
		b2.setBounds(170,330,100,30);
		b3=new JButton("Back");
		b3.setBackground(Color.yellow);
		b3.addActionListener(this);
		b3.setBounds(290,330,100,30);

		cbg=new CheckboxGroup();

		c1=new Checkbox("Male",cbg,true);
		c1.setBounds(400,130,100,30);

		c2=new Checkbox("Female",cbg,false); 
		c2.setBounds(400,160,100,30);

		c3=new Checkbox("Techer");
		c3.setBounds(150,240,100,30);

		c4=new Checkbox("Student");
		c4.setBounds(150,270,100,30);

		c5=new Checkbox("Job Seekers");
		c5.setBounds(150,300,100,30);

		f.getContentPane().add(l1);
		f.getContentPane().add(l2);
		f.getContentPane().add(l3);
		f.getContentPane().add(l4);
		f.getContentPane().add(l5);
		f.getContentPane().add(l6);
		f.getContentPane().add(t1);
		f.getContentPane().add(t2);
		f.getContentPane().add(t3);
		f.getContentPane().add(ta);
		f.getContentPane().add(b1);
		f.getContentPane().add(b2);
		f.getContentPane().add(b3);
		f.getContentPane().add(c1);
		f.getContentPane().add(c2);
		f.getContentPane().add(c3);
		f.getContentPane().add(c4);
		f.getContentPane().add(c5);
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

if(e.getSource()==b3)
{
  f.setVisible(false);
  new Registration();
}
}
public static void main(String args[])
{
  new Personal();
}
}