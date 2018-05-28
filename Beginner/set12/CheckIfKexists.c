#include <stdio.h>

int main()
{ 
   int n,k,a[n],flag=0;
   scanf("%d %d",&n,&k);
   for(int i=0;i<n;i++) {
   	scanf("%d",&a[i]);
   }
   for(int i=0;i<n;i++) {
   	if(k==a[i]) {
   		flag=1;
   		break;
   	}
   }
   if(flag==1) {
   	printf("yes ");
   }
   else 
	printf("no");
   return 0;
}
