import java.util.*;
public class CountOfGivenDigitInNo {
    public static void main(String args[]) {
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int k=sc.nextInt();
        int rem,count=0;
        while(n>0) {
            rem=n%10;
            if(rem==k) {
                count++;
            }
            n/=10;
        }
        System.out.println(count);
    }
}
