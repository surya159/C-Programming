import java.util.*;
public class MinDivOddNo {
    public static void main(String args[]) {
    Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        for(int i=1;i<=n;i++) {
            if(n%i == 0) {
                int val=n/i;
                if(val%2 != 0) {
                    System.out.print(i);
                    break;
                }
            }
        }
        
    }
}
