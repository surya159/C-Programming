#include <stdio.h>
#include <string.h>

int main(void) {
	// your code goes here
	int flag=0,flag1=0;
	char s[20];
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++) {
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) {
		flag=1;
		}
		else if(s[i]>='0' && s[i]<='9') {
			flag1=1;
		}
	}
	if(flag==1 && flag1==1) {
			printf("Yes");
		}
		else
			printf("No");
	
	return 0;
}
