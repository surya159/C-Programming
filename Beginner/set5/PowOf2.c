#include <stdio.h>
int main()
{
	int i,j,flag=0;
	scanf("%d",&i);
	j=i;
	
	while(j!=1) {
		if(j%2 != 0) {
			flag=1;
			break;
		}
		j=j/2;
	}
	if(flag ==0) {
		printf("yes");
	}
	else
		printf("no");
		
	
	return 0;
}
