#include <stdio.h>

int main()
{
   char s[20];
   scanf("%s",s);
   int n;
   scanf("%d",&n);
   
   for(int i=0;i<n;i++)
   {
   	printf("%c",s[i]);
   }
   return 0;
}
