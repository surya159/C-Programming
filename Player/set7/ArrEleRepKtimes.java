import java.util.*;
public class ArrSortLessThanNo {
    public static void main(String args[]) {
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int k=sc.nextInt();
        int a[]= new int[n];
        int count[]= new int[n];
        for(int i=0;i<n;i++) {
            a[i]=sc.nextInt();
            count[i]=1;
        }
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                if(a[i] == a[j]) {
                    count[i]++;
                }
            }
            if(count[i]==k)  {
                System.out.print(a[i]);
                break;
        }
    }
    }
}
