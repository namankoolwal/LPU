import java.util.Scanner;

public class inputfromuser {
public static void main(String args[])
{
int a;
Scanner s=new Scanner(System.in);
System.out.println("how many numbers");
a=s.nextInt();
int[] arr1=new int[15];
System.out.println("Enter elements");
for(int i=0;i<a;i++)
{
arr1[i]=s.nextInt();
}
System.out.println(" You Entered....");
for(int i=0;i<a;i++)
{
System.out.println(arr1[i]);
}
}
}




