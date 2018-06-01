import java.util.*;
public class SqOfDigits {
    public static void main(String[] args) 
    {
        Scanner sc= new Scanner(System.in);
        long n=sc.nextLong();
        long sum=0,rem;
        while(n>0) {
            rem=n%10;
            sum= sum+(rem*rem);
            n=n/10;
        }
        System.out.println(sum);
}
}
