import java.io.*;
import java.net.*;
import java.util.*;
public class client
{
	public static void main(String args[])
	{
		try
		{
			Socket client=new Socket("localhost",8000);
			DataInputStream fromserver=new DataInputStream(client.getInputStream());
			PrintWriter toserver=new PrintWriter(client.getOutputStream(),true);
			while(true)
			{
				System.out.println("\n Enter any number : ");
				Scanner sc=new Scanner(System.in);
				int no=sc.nextInt();
				toserver.println(no);
				Scanner sc1=new Scanner(fromserver);
				int cube=sc1.nextInt();
				System.out.println("\n Cube of "+no+" : "+cube);
			}
		}
		catch(IOException e)
		{
			System.out.println(e);
		}
	}
}