// Implementation of client side code
import java.io.*;
import java.net.*;
class inadd
{
public static void main(String args[]) throws IOException
{
Socket s=new Socket("localhost",1231);
InputStream is=s.getInputStream();
DataInputStream dis=new DataInputStream(is);
String s1=new String(dis.readUTF());
System.out.println("received String is: "+s1);
s.close();
is.close();
dis.close();
}
}