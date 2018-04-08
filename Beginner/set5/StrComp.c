#include <stdio.h>
#include <string.h>
int main(void) {
	// your code goes here
	
	char s1[20],s2[20];
	scanf("%s",s1);
	scanf("%s",s2);
	
	for(int i=0;i<strlen(s1); i++) {
		if(s1[i] > s2[i]) {
			printf("%s",s1);
			break;
		}
		
		else
			printf("%s",s2);
			break;
		
	}
	return 0;
}
