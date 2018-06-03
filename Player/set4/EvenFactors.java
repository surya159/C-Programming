import java.util.*;
public class EvenFactors {
    public static void main(String args[]) {
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=2;i<=n;i++) {
            if( n%i==0 && i%2==0) {
                System.out.print( i + " ");
            }
        }
    }
}
