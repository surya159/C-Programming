import java.util.*;
public class PrimeNosCount {
    public static void main(String args[])
    {
         int flag = 0,count=0;
         Scanner sc = new Scanner(System.in);
         int n1 = sc.nextInt();
         int n2 = sc.nextInt();
         
         for(int i=n1;i<=n2;i++)
         {
             for(int j=2;j<i;j++)
             {
                 if(i % j == 0)
                 {
                     flag = 0;
                     break;
                 }
                 else
                 {
                     flag = 1;
                                      }
             }
             if(flag == 1)
             {
                 count++;
             }
         }
         System.out.println(count);
    }
}
