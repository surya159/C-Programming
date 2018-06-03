import java.util.*;
import java.lang.*;
import java.io.*;

class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc= new Scanner(System.in);
		int a=sc.nextInt();
		int b=sc.nextInt();
		int c=sc.nextInt();
		if(a<=180 && b<=180 && c<=180 && (a+b+c==180) && a!=0 && b!=0 && c!=0) 
			System.out.println("yes ");
		else
			System.out.println("no ");


	}
}
