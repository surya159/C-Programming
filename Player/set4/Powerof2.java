import java.util.*;
public class PowerOf2 {
    public static void main(String args[]) {
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int flag=0;
        if(n==0) {
           System.out.print("no ");

        }
        while(n != 1)
        {
            if (n%2 != 0)
                flag=1;
            n/=2;
        }
        if(flag==1) {
            System.out.print("no ");
        }
        else
            System.out.print("yes ");
    }
 
}
