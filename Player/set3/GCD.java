import java.util.*;
import java.lang.*;
import java.io.*;

class Ideone
{
	static int gcd(int a, int b)
    {
        if (a == 0 || b == 0)
           return 0;
      
        if (a == b)
            return a;
      
        if (a > b)
            return gcd(a-b, b);
        return gcd(a, b-a);
    }
    
    
    public static void main(String []args) 
    {
        Scanner sc=new Scanner(System.in);
        int n1=sc.nextInt();
        int n2=sc.nextInt();
        System.out.println(gcd(n1, n2));
    }
}
