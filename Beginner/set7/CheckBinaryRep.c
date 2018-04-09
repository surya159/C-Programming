#include <stdio.h>
#include <string.h>

int main()
{
   char s[20];
   scanf("%s",s);
   int k=0;
   
   for(int i=0;i<strlen(s);i++)
   {
   	if(s[i] == '0' || s[i] =='1') {
   		k=1;
   		
   	}
   	else {
   		k=0;
   		break;
   	}
   
   }
   if(k==1) {
   	printf("Yes");
   }
   else
	printf("No");
   
   return 0;
}
