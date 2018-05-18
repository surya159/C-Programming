#include<stdio.h>
int main(void)
{
int n,a[n],k=0;
scanf("%d",&n);
for(int i=0;i<n;i++) {
	scanf("%d",&a[i]);
}
for(int i=0;i<n;i++) {
	if(i%2==0) {
		if(a[i]%2!=0){
			printf("%d ",a[i]);
		}
	}
	if(i%2!=0) {
		if(a[i]%2==0){
			printf("%d ",a[i]);
		}
	}
}

return 0;
}
