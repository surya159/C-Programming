#include <stdio.h>
#include <math.h>
int main(void) {
	// your code goes here
	int h,m,h1,m1,h2,m2;
	scanf("%d%d",&h1,&m1);
	scanf("%d%d",&h2,&m2);
	m1=h1*60+m1;
	m2=h2*60+m2;
	m=abs(m1-m2);
	
	h=m/60;
	m=m%60;
	printf("%d %d",h,m);
	
	
	
	return 0;
}
