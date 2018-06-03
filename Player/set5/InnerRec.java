import java.util.*;
public class InnerRec {
    public static void main(String args[]) {
        
    Scanner sc= new Scanner(System.in);
    int P =sc.nextInt();
    int A =sc.nextInt();
    int flag =0;
    for(int i=1; i<=(P/2);i++)
    {
	    for(int j=1;j<=(P/2);j++)
	{
	    int p=2*(i+j);
	    int a=i*j;
	    if(p==P && a==A)
	    {
	        flag=1;
	        break;
	    }
	}
    }
	if(flag==1)
	    System.out.println("yes ");
	else
	    System.out.println("no ");
	}
}
