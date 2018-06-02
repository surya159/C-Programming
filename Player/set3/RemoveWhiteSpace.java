import java.util.*;
public class ReplaceSpaces {   
    public static void main(String args[]) {
        Scanner sc= new Scanner(System.in);
        String s=sc.nextLine();
        s=s.replaceAll(" ","");
        System.out.println(s);
    }
}
