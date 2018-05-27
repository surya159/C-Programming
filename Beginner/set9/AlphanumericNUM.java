import java.util.*;
public class alphanumeric {
    public static void main(String a[]) {
        Scanner sc=new Scanner(System.in);
        String str=sc.next();
        StringBuffer num= new StringBuffer();
        
    for (int i=0; i<str.length(); i++)
        {
            if (Character.isDigit(str.charAt(i)))
                num.append(str.charAt(i));
        }
        System.out.println(num);
    }
}
