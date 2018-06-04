import java.util.*;
public class Arr2NosSum {
    public static void main(String args[]) {
    Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int x=sc.nextInt();
        int a[]= new int[n];
        for(int i=0;i<n;i++) {
            a[i]=sc.nextInt();
        }
        int flag=0;
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                if(a[i]+a[j]==x) {
                    flag=1;
                    break;
                }
                if(flag==1)
                    break;
            }
        }
        if(flag==1)
            System.out.print("yes ");
        else
            System.out.print("no ");
        
}
}
