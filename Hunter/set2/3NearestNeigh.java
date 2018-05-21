import java.util.*;
public class SumArray {
    public static void main(String args[]) {
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int k=sc.nextInt();
        int t,ind=0;
        int []a= new int[n];
        for(int i=0;i<n;i++) {
            a[i]=sc.nextInt();
        }
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                if(a[i]>a[j]) {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
                }
            }
        }
         for(int i=0;i<n;i++) {
             if(a[i]==k) {
                 ind=i;
                 
             }
         }
        if(ind==0) {
	System.out.println(a[ind+1] + " " + a[ind+2] + " " + a[ind+3]);
	}
	else if(ind==n-1) {
	System.out.println(a[ind-1] + " " + a[ind-2] + " " + a[ind-3]);
	}
        else if(ind==1) {
	System.out.println(a[ind-1] + " " + a[ind+1] + " " + a[ind-2]);
	}
        else  {
	System.out.println(a[ind-1] + " " + a[ind+1] + " " + a[ind-2]);
	}
        
    }
    
}
