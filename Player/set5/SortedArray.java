import java.util.*;
public class CheckArraySorted {
    public static void main(String args[]) {
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int a[]= new int[n];
        int flag=0;
        for(int i=0;i<n;i++) {
            a[i]=sc.nextInt();
        }
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                if(a[i]>a[j]) {
                    flag=1;
                    break;
            }
        }
    }
        if(flag==1) {
            System.out.println("no " );
        }
        else
            System.out.println("yes " );

}
}
