import java.io.*;
import java.net.*;
import java.util.*;
import javax.swing.*;
public class client
{
	public static void main(String args[])
	{
		try
		{
			JFrame frame=new JFrame("My First GUI");
			frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
			frame.setSize(300,300);
			JButton button=new JButton("Press");
			frame.getContentPane().add(button);
			frame.setVisible(true);

			JPanel panel=new JPanel();
			JLabel label=new JLabel("\n Enter Message : ");
			JTextField tf=new JTextField(20);
			JButton send=new JButton("send");
			panel.add(label);
			panel.add(tf);
			panel.add(send);

			JTextArea ta=new JTextArea();
			//frame.getContentPane().add(BorderLayout.SOUTH, panel);
			//frame.getContentPane().add(BorderLayout.CENTER, ta);
			panel.add(tf);
			panel.add(ta);
			frame.setVisible(true);

			Socket client=new Socket("localhost",8000);
			DataInputStream fromserver=new DataInputStream(client.getInputStream());
			PrintWriter toserver=new PrintWriter(client.getOutputStream(),true);
			while(true)
			{
				System.out.println("\n Enter Message : ");
				Scanner sc=new Scanner(System.in);
				String msg=sc.next();
				toserver.println(msg);
				Scanner sc1=new Scanner(fromserver);
				String msg1=sc1.next();
				System.out.println("\n Message : "+msg1);

			}
		}
		catch(IOException e)
		{
			System.out.println(e);
		}
	}
}