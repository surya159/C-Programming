import java.util.*;
public class ArrEleRepKtimes {

    public static void main(String args[]) {
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int k=sc.nextInt();
        int a[]= new int[n];
        int freq[]= new int[n];
        int count;
        for(int i=0;i<n;i++) {
            a[i]=sc.nextInt();
            freq[i]=1;
        }
        for(int i=0;i<n-1;i++) {
            count=1;
            for(int j=i+1;j<n;j++) {
                if(a[i] == a[j]) {
                    count++;
                    freq[j]=0;
                }
            }
            if(freq[i]!=0)  {
                freq[i]=count;
        }
    }
        for(int i=0;i<n;i++) {
            if((freq[i] != 0) && freq[i]==k)
                System.out.print(a[i] + " ");
        }
    }
}
