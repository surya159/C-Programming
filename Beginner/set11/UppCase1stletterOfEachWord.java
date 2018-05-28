import java.util.*;
public class CaptilizeFirstLetter {
    
	public static void main(String[] args) {
                Scanner sc=new Scanner(System.in);
		String str = sc.nextLine();
		StringBuilder ans = new StringBuilder(str.length());
		String words[] = str.split(" "); 
		for (int i=0; i<words.length; i++)
		{			
			ans.append(Character.toUpperCase(words[i].charAt(0))).append(words[i].substring(1)).append(" ");
			
		}
		
		System.out.println(ans);
		 
	}
 
}
