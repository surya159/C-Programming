import java.util.*;
public class LengOfLongRepSeq {
    public static void main(String [] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int a[]= new int[n];
        for(int i=0;i<n;i++) {
            a[i]=sc.nextInt();
        }
        Arrays.sort(a);
        int count=0,maxcount=0;
        for(int i=0;i<n;i++) {
            count=1;
            for(int j=i;j<n-1;j++) {
                if(a[j]== a[j+1]) {
                    count++;
                }
                else break;
                
            }
            if(count>maxcount)
                maxcount=count;
        }
        System.out.print(maxcount);
  
        }
    }
