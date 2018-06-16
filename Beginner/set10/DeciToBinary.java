import java.util.*;
public class DecimalToBinary {
    public static void main(String args[]) {
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int a[]= new int[n];
        int i;
        for(i=0;n>0;i++) {
            a[i]=n%2;
            n=n/2;
        }
        for(i=i-1;i>=0;i--) {
            System.out.print(a[i]);
        }
    }
}
