#include<stdio.h>
int main(void)
{
int t,n,a[n];
scanf("%d",&n);
for(int i=0;i<n;i++) {
	scanf("%d",&a[i]);
}
for(int i=0;i<n-1;i++) {
	for(int j=i+1;j<n;j++) {
		if(a[i]>a[j]) {
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		}
	}
}
for(int i=0;i<n-2;i++) {
	for(int j=i+1;j<n-1;j++) {
		for(int k=j+1;k<n;k++) {
			if(a[i] + a[j] == a[k]) {
				printf("%d %d %d\n",a[i],a[j],a[k]);
			}
		}
	}
}
	
return 0;
}
