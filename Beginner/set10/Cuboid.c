#include <stdio.h>

int main(void) {
	int l,b,h,tsa,vol;
	scanf("%d %d %d",&l,&b,&h);
	tsa=2*((l*b)+(b*h)+(h*l));
	vol=l*b*h;
	printf("%d\n",vol);
	
	return 0;
}
