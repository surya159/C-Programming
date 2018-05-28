#include <stdio.h>
#include <math.h>

int main(void) {
	int n,k=0;
	scanf("%d",&n);
	for(int i=2;i<=n/2;++i){
		if(n%i==0){
			k=1;
			break;
		}
		
	}
	if(k==1)
		printf("yes ");
	else
		printf("no");

	return 0;
}
