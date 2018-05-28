#include <stdio.h>

int main()
{ 
   long int n,sum=0;
   scanf("%d",&n);
   for (int i=1;i<=n;i++) {
	sum+=i;
   }
   
   printf("%ld ", sum);
   return 0;
}

