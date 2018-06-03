import java.util.*;
public class StrCmpCaseInsens {
    public static void main(String args[]) {
        Scanner sc= new Scanner(System.in);
        String s1=sc.next().toLowerCase();
        String s2=sc.next().toLowerCase();
        if(s1.equals(s2))
            System.out.print("yes ");
        else
            System.out.print("no ");
           
        }
}
  
