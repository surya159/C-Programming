import java.util.*;
import java.lang.*;
import java.io.*;

class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc= new Scanner(System.in);
		long n=sc.nextLong();
		if(n>=-2147483648 && n<=2147483647)
			System.out.println("INT");
		else if(n<-2147483648 || n>2147483647)
			System.out.println("LONG LONG");

	}
}
