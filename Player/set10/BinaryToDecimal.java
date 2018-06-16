import java.util.*;
public class BinToDeci {

    public static void main(String args[]) {
        Scanner sc= new Scanner(System.in);
        long n=sc.nextLong();
        long base=1,rem=0,dec=0,temp=n;
        while(n>0) {
            rem=n%10;
            dec=dec+rem*base;
            n=n/10;
            base=base*2;
        }
        System.out.print(dec);
    }
}
