#include <stdio.h>
#include <string.h>

int main()
{
   char ch[20];
   scanf("%[^\t]s",ch);
   int k=0;
   
   for(int i=0;i<strlen(ch);i++)  
            {  
                
                if( ((i>0)&&(ch[i]!=' ')&&(ch[i-1]==' ')) || ((ch[0]!=' ')&&(i==0)) )  {
                    k++; 
                }
            }  
 		printf("%d",k);
	
   
   return 0;
}
