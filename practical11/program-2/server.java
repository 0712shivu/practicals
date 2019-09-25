import java.io.*;
import java.net.*;
import java.util.*;
public class server
{
	public static void main(String args[])
	{
		try
		{
			ServerSocket server=new ServerSocket(8000);
			Socket client=server.accept();
			DataInputStream fromclient=new DataInputStream(client.getInputStream());
			PrintWriter toclient=new PrintWriter(client.getOutputStream(),true);
			while(true)
			{
				Scanner sc=new Scanner(fromclient);
				int no=sc.nextInt();
				System.out.println();
				int cube=no*no*no;
				toclient.println(cube);
				System.out.println("\n Cube : "+cube);
			}
		}
		catch(IOException e)
		{
			System.out.println(e);
		}
	}
}