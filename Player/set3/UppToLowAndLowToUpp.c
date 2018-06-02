#include <stdio.h>
#include <string.h>

int main(void) {
	char st[30];
	scanf("%s",st);
	for(int i=0;i<strlen(st);i++) {
		if(st[i]>= 65 && st[i]<=90) {
			st[i]=st[i]+32;
		}
		else if(st[i]>=97 && st[i]<=122) {
			st[i]=st[i]-32;
		}
	}
	printf("%s",st);
	return 0;
}
