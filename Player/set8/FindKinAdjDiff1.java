import java.util.*;

class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc= new Scanner(System.in);
		int n=sc.nextInt();
		int k=sc.nextInt();
		int a[]= new int[n];
		
		for(int i=0;i<n;i++) {
			a[i]=sc.nextInt();
		}
		
		for(int i=0;i<n ;i++) {
			if(a[i]==k) {
			System.out.println(i+1);
			}
			
		}
		
		
	}
}
