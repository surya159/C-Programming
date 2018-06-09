import java.util.*;
public class ArrMaxDiff {
    public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc= new Scanner(System.in);
		int n=sc.nextInt();
		int a[]= new int[n];
		
		for(int i=0;i<n;i++) {
			a[i]=sc.nextInt();
		}
                
                for(int i=0;i<n-1;i++) {
                    if(a[i]>a[i+1]) {
                        int t=a[i];
                        a[i]=a[i+1];
                        a[i+1]=t;
                    }
                }
		
		int diff[] = new int[n - 1];
        for (int i = 0; i < n - 1; i++)
            diff[i] = a[i + 1] - a[i];
 
        
        int maxdiff = diff[0];
        for (int i = 1; i < n - 1; i++) 
        {
            if (diff[i - 1] > 0) 
                diff[i] = diff[i] + diff[i - 1];
            if (maxdiff < diff[i])
                maxdiff = diff[i];
        }
		System.out.print(maxdiff);	
			
	}
}
