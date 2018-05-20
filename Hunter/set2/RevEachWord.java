import java.util.*;
import java.lang.*;
public class StringRev {  
    public static void main(String args[]){
    Scanner sc= new Scanner(System.in);
    String str=sc.nextLine();
    String words[] = str.split(" ");
	for(int i=0;i< words.length;i++){
        String s1=new StringBuffer(words[i]).reverse().toString();
        System.out.printf("%s ",s1);
    }
	
   }}
