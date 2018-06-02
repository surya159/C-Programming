import java.util.*;
public class PerfSqInaRange {
    public static void main(String args[]) {
        Scanner sc= new Scanner(System.in);
        int n1=sc.nextInt();
        int n2=sc.nextInt();
        int count=0;
        for(int i=1;i<=n2;i++) {
		int val=i*i;
		if(val>=n1 && val<=n2) {
			count=count+1;
		}
		
	}
        System.out.println(count);
    }
}
