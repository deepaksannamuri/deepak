import java.awt.*;
import java.awt.event.*;
import javax.swing.*;


class Main  extends Frame  implements ActionListener

{
		JFrame f;
		JButton b1,b2,b4,b5;
		Registration r;
		improvements q;
		
		JLabel imgL;
		ImageIcon img;
		Login nf;

   Main()
   {
	img=new ImageIcon("1483617573-computer-course-banners-top.jpg");
	imgL=new JLabel(img);
	imgL.setBounds(0,0,1000,800);
	
	f=new JFrame("Main");

	
	b1=new JButton("Registration");
	b1.addActionListener(this);
	b1.setBounds(240,320,180,40);

	b2=new JButton("Rating");
	b2.addActionListener(this);
	b2.setBounds(470,240,180,40);

	

	b4=new JButton("Exit");
	b4.addActionListener(this);
	b4.setBounds(680,440,150,40);

	b5=new JButton("Login ");
	b5.addActionListener(this);
	b5.setBounds(240,240,180,40);

		f.add(b1);
		f.add(b2);
		
		f.add(b4);
		f.add(b5);
		f.add(imgL);

    		f.setSize(900,600);
			f.setVisible(true);

}

public void actionPerformed(ActionEvent e)
{
	if(e.getSource()==b1)
	{
		f.setVisible(false);
		r=new Registration();
	}
	
	if(e.getSource()==b2)
	{
		f.setVisible(false);
		q=new improvements();
	}
	
	

	if(e.getSource()==b5)
    {
	  f.setVisible(false);
	  	nf=new Login();
	}

	if(e.getSource()==b4)
	{
		f.setVisible(false);
		System.exit(0);
	}
}
public static void main(String args[])
{
  new Main();
}
}
