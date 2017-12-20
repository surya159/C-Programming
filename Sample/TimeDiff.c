#include <stdio.h>

int main(void) {
	// your code goes here
	int t1,t2,h1,h2,m1,m2,diff;
	printf("Enter the hour and minutes of time 1\n");
	scanf("%d%d",&h1,&m1);
	t1=(h1*60)+m1;
	printf("Enter the hour and minutes of time 2\n");
	scanf("%d%d",&h2,&m2);
	t2=(h2*60)+m2;
	diff=t1-t2;
	if(diff>60)
	{
		t1=diff/60;
		t2=diff%60;
		printf("Time Difference is %d hrs %d mins\n",t1,t2);
	}
	else
	{
		t2=diff%60;
		printf("Time Difference is %d mins\n",t2);
	}
	return 0;
}
