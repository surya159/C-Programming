#include <stdio.h>
#include <string.h>

int main(void) {
	char st[30];
	int k;
	scanf("%s",st);
	scanf("%d",&k);
	int n=strlen(st)-k;
	for(int i=n;i<strlen(st);i++) {
		printf("%c",st[i]);
		
	}
	return 0;
}
