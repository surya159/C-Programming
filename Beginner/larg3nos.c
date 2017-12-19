#include <stdio.h>

int main(void) {
	// your code goes here
	int x,y,z;
	printf("Enter 3 nos\n");
	scanf("%d%d%d",&x,&y,&z);
	((x>y)&&(x>z))?printf("%d",x):(y>z)?printf("%d",y):printf("%d",z);
	
	return 0;
}
