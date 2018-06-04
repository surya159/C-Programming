import java.util.*;

class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc= new Scanner(System.in);
		int n=sc.nextInt();
		int Ecount=0,Et=0,Ot=0;
		int a[]= new int[n];
		
		for(int i=0;i<n;i++) {
			a[i]=sc.nextInt();
		}
		
		for(int i=0;i<n ;i++) {
			if(a[i]%2 ==0) {
				Ecount++;
				Et=a[i];
			}
			else if(a[i]%2 != 0){
				Ot=a[i];
			}
		}
		if(Ecount==1)
			System.out.print(Et);
		else
			System.out.print(Ot);	
			
		
		
		
	}
}
