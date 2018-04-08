#include <stdio.h>
#include <string.h>
int main(void) {
	// your code goes here
	int i,j;
	char s1[20],s2[20];
	scanf("%s",s1);
	scanf("%s",s2);
	
	for(i=0;s1[i]!='\0'; ++i);
	for(j=0; s2[j]!= '\0'; ++j,++i) {
		s1[i]=s2[j];
	}
	s1[i]='\0';
	printf("%s",s1);
	return 0;
}
