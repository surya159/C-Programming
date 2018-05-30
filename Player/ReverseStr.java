import java.util.*;
public class Reverse {
     public static void main(String args[]) {
        Scanner sc= new Scanner(System.in);
        String s=sc.nextLine();
        StringBuffer buf=new StringBuffer(s);
    if(s.length()<=100000)
        {
        String st=buf.reverse().toString();
        System.out.print(st);
}}
}
