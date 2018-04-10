/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc= new Scanner(System.in);
		String s1=sc.nextLine();
		int k=0;
		
		for(int i=s1.length()-1;i>=0;--i){
			char c=s1.charAt(i);
			if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U') {
				k=1;
				break;
			}}
		
		if(k==1){
			System.out.println("yes");
		}
		else{
		System.out.println("no");
		}}
}
