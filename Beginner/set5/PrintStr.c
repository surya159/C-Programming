#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	char str[20];
	scanf("%s",str);
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		printf("%s\n",str);
	}
	return 0;
}
