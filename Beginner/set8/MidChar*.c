#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[20];
	scanf("%s",s1);
	int n=strlen(s1);
	int m=n/2;
	
	if(n%2 == 0) {
		s1[m-1]='*';
		s1[m]='*';
	}
	else {
		s1[m]='*';
	}
	printf("%s",s1);
	return 0;
}
