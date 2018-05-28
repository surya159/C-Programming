#include <stdio.h>

int main()
{ 
   int n,k,a[n],count=0;
   scanf("%d %d",&n,&k);
   for(int i=0;i<n;i++) {
   	scanf("%d",&a[i]);
   }
   for(int i=0;i<n;i++) {
   	if(a[i]==k) {
   		count=count+1;
   		
   	}
   }
   printf("%d ",count);
   return 0;
}
