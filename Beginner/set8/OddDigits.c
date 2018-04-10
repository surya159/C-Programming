#include <stdio.h>
#include <string.h>

int main(void) {
	char s[20];
	scanf("%s",s);
	for(int i=1;i<=strlen(s);i=i+2) {
		printf("%c ",s[i]);
	}

	return 0;
}
