import java.util.*;
public class Duplicate {
   
      public static void main(String aa[]){
            int n,count=0;
            Scanner s=new Scanner(System.in);
            n=s.nextInt();
            int a[]=new int[n];
            TreeSet<Integer> ts= new TreeSet<Integer>();
            ArrayList<Integer> al= new ArrayList<Integer>();
            for(int i=0;i<n;i++){
                a[i]=s.nextInt();
				
            }
            for(int i=0;i<n-1;i++) {
				for(int j=i+1;j<n;j++) {
					if(a[i]==a[j]) {
						ts.add(a[i]); 
					}
				}
            }
            al.addAll(ts);
            for(int i=0;i<al.size();i++) {
                System.out.print(al.get(i) + " ");
            }
                }
       }
