import java.util.*;
 
public class RomanToNumeral
{
    
    int value(char val)
    {
        if (val == 'I')
            return 1;
        if (val == 'V')
            return 5;
        if (val == 'X')
            return 10;
        if (val == 'L')
            return 50;
        if (val == 'C')
            return 100;
        if (val == 'D')
            return 500;
        if (val == 'M')
            return 1000;
        return -1;
    }
 
    
    int romanToDecimal(String str)
    {
        
        int result = 0;
 
        for (int i=0; i<str.length(); i++)
        {
            
            int s1 = value(str.charAt(i));
             
            if (i+1 <str.length())
            {
                int s2 = value(str.charAt(i+1));
 
                if (s1 >= s2)
                {
                    
                    result = result + s1;
                }
                else
                {
                    result = result + s2 - s1;
                    i++; 
                }
            }
            else
            {
                result = result + s1;
                i++;
            }
        }
 
        return result;
    }
 
    
    public static void main(String args[])
    {
        RomanToNumeral ob = new RomanToNumeral();
        
        Scanner sc= new Scanner(System.in);
        String str = sc.next();
        System.out.println(ob.romanToDecimal(str));
    }
}
