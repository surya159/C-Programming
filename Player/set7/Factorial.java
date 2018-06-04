import java.util.*;
import java.lang.*;
import java.io.*;


class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc= new Scanner(System.in);
		int n=sc.nextInt();
		int fac=1;
		for(int i=1;i<=n;i++) {
			fac=fac*i;
		}
		System.out.print(fac);
	}
}
