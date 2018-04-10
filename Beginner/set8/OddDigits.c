#include <stdio.h>
#include <string.h>

int main(void) {
	char s[20];
	scanf("%s",s);
	for(int i=0;i<=strlen(s);i++) {
		if(s[i]%2 != 0) {
		printf("%c ",s[i]);
	}
	}

	return 0;
}
