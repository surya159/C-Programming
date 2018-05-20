#include <stdio.h>

int main(void) {
	int n,m,a[n],b[m],k=0;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++) {
		scanf("%d",&b[i]);
	}
	if(m>n) {
		printf("NO ");
		return 0;
	}
	else if(m<=n) {
		for(int i=0;i<m;i++) {
			for(int j=0;j<n;j++) {
				if(b[i]==a[j]) {
					k++;
					break;
				}
				
			}
		}
	}
	if(k==m){
		printf("YES ");
		}
	else if(k!=m || m>n){
		printf("NO ");
	}
	return 0;
}
