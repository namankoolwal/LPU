// implementation of HTTPURLCOnnection class
import java.net.*;

class Urlex
{
public static void main(String args[])throws MalformedURLException
{
try
{
URL u=new URL("https://ums.lpu.in/LpuUms/frmExaminationTasks.aspx");
HttpURLConnection uc=(HttpURLConnection)u.openConnection();
System.out.println("Index along with fields:");
for(int i=0;i<6;i++)
{
System.out.println("Key= "+uc.getHeaderFieldKey(i)+" value= "+uc.getHeaderField(i));
}
}
catch(Exception e)
{
System.out.println(e);
}
}
}

