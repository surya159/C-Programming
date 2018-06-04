#include <stdio.h>
#include <string.h>

int main(void) {
	char st[30];
	scanf("%s",st);
	for(int i=0;i<strlen(st)-1;i++) {
		if(st[i]==st[i+1]) {
			printf("yes ");
			return 0;
		}
	}
	printf("no ");
	
	return 0;
}
