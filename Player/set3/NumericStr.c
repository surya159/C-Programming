#include <stdio.h>
#include <string.h>

int main(void) {
	char st[30];
	scanf("%s",st);
	int flag=0;
	for(int i=0;i<strlen(st);i++) {
		if(st[i]<48 || st[i]>57) {
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("no");
	else
		printf("yes");
	return 0;
}
