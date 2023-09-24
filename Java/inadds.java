// Implementation of server side code
import java.io.*;
import java.net.*;
class inadds
{
public static void main(String args[]) throws IOException
{
ServerSocket ss=new ServerSocket(1231);
Socket s=ss.accept();
OutputStream os= s.getOutputStream();
DataOutputStream d=new DataOutputStream(os);
d.writeUTF("Welcome Everyone Here I am server class");
ss.close();
os.close();
d.close();
}
}
