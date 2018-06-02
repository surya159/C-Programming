#include <stdio.h>
#include <string.h>

int main(void) {
	char s[30];
	scanf("%[^/t]s",s);
	for(int i=strlen(s);i>=0;i--) {
	        if(s[i]!='A'&& s[i]!='E' && s[i]!='I' &&s[i]!='O' && s[i]!='U' && s[i]!='a' &&s [i]!='e' && s[i]!='i' && s[i]!='o' &&s [i]!='u') 
	        	printf("%c",s[i]);
	        

	}
	return 0;
}
