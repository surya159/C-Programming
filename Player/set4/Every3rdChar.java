import java.util.*;
public class EveryThirdChar {
    public static void main(String args[]) {
        Scanner sc= new Scanner(System.in);
        String st=sc.nextLine();
        for(int i=0;i<st.length();i=i+3) {
            System.out.print(st.charAt(i) + " ");
        }
    }
}
