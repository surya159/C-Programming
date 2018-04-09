#include <stdio.h>
#include <string.h>
int main(void) {
	// your code goes here
	char s[10];
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++)  {
		printf("%c ",s[i]);
	}
	return 0;
}
