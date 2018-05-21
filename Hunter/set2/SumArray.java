import java.util.*;
public class SubArrSum {
    public static void main (String[] args)
	{
	    Scanner sc=new Scanner(System.in);
	    int n=sc.nextInt();
	    int Asum=0;
	    int[] a=new int[n];
	    for(int i=0;i<n;i++)
	    {
	        a[i]=sc.nextInt();
	    }
	    for(int i=0;i<n;i++)
	    {
	     Asum+=a[i];   
	    }
	    System.out.println(Asum);
	}
}
