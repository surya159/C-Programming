#include <stdio.h>

int main(void) {
	// your code goes here
	int h,m;
	scanf("%d",&m);
	if(m<60) {
	   printf("%d %d",h,m);
	}
	else {
	h=m/60;
	m=m%60;
	printf("%d %d",h,m);
	}
	
	
	return 0;
}
