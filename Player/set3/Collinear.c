#include <stdio.h>

int main(void) {
	int x1,x2,x3,y3,y2,y1;
	 scanf("%d %d ",&x1,&y1);
 	 scanf("%d %d ",&x2,&y2);
	 scanf("%d %d ",&x3,&y3);
	 int ans = x1 * (y2 - y3) +  x2 * (y3 - y1) +  x3 * (y1 - y2);
            
           	 if(ans==0)
		printf("yes ");
	 else
		printf("no ");
	return 0;
}
