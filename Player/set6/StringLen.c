#include <stdio.h>

int main(void) 
{
	char st[100];
	scanf("%s",st);
	int len=0;
	for(int i=0;st[i] != '\0';i++) {
		len++;
	}
	printf("%d",len);
	
	return 0;
}
