#include <stdio.h>

int main(void) {
	int n,m;
	scanf("%d%d",&n,&m);
	m=m*n;
	for(int i=0;i<=m;i++) {
		if(m == i*i) {
			printf("yes");
			return 0;
		}
	}
			printf("no");
	

	return 0;
}
