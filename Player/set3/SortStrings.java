import java.util.*;
public class StringSortnew {
    public static void main(String[] args) 
    {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        String names[] = new String[n];
        Scanner s1 = new Scanner(System.in);
        for(int i = 0; i < n; i++)
        {
            names[i] = s1.next();
        }
        for (int i = 0; i < n; i++) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                if (names[i].compareTo(names[j])>0) 
                {
                    String temp = names[i];
                    names[i] = names[j];
                    names[j] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                if (names[i].length() > names[j].length()) {
                    String temp = names[i];
                    names[i] = names[j];
                    names[j] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++) 
        {
            System.out.println(names[i] + " ");
        }
        
    }
}
