#include<stdio.h>
int main(void)
{
int n,a[n],k=0;
scanf("%d",&n);
for(int i=0;i<n;i++) {
	scanf("%d",&a[i]);
}
for(int i=0;i<n-1;i++) {
	for(int j=i+1;j<n;j++) {
		if(a[i]==a[j]) {
			k++;
			printf("%d",a[i]);
			break;
		}
	}
}
if(k==0) {
	printf("unique");
}
return 0;
}
