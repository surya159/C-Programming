#include <stdio.h>
#include <string.h>

int main(void) {
	char a[30];
	scanf("%s",a);
	int n=strlen(a);
	for(int i=0;i<n;i=i+2) {
		printf("%c",a[i]);
	}
	printf("\t");
	for(int i=1;i<n;i=i+2) {
		printf("%c",a[i]);
	}
	return 0;
}
