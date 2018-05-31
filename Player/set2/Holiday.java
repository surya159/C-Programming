import java.util.*;
 
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		String str=sc.next().toLowerCase();;
 
		if(str.equals("sunday") || str.equals("saturday")) 
			System.out.println("yes");
 
		else 
			System.out.println("no");
	}
}
