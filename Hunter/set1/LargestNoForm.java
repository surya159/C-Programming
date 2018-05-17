import java.util.*;
public class LargestNo {
    public static void main(String args[] ) throws Exception {
       Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int m=0,temp;
		int[] arr=new int[n];
		for(int i=0;i<n;i++){
		arr[i]=sc.nextInt();
		}
		for(int i=0;i<n-1;i++){
		    for(int j=i+1;j<n;j++){
		        if(arr[i]<arr[j]){
		         temp=arr[i];
		         arr[i]=arr[j];
		         arr[j]=temp;
		        }
		    }
		}
		
		for(int i=n-1,x=0;i>=0;i--){
	               int p=(int)Math.pow(10, i);
	               m=m+(arr[x]*p);
		   x++;
		}
		System.out.println(m);
	
	}
}
