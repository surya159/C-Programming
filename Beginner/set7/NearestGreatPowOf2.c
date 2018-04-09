#include <stdio.h>

int main(void) {
	int no;
	scanf("%d",&no);
	int x=1;
	while(x<no)
	{
		x<<=1;
	}
	printf("%d",x);
	return 0;
}
