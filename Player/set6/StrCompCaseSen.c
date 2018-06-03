#include <stdio.h>
#include <string.h>

int main(void) 
{
	char s1[30],s2[30];
	scanf("%s",s1);
	scanf("%s",s2);
	int flag=0;
	int len= strlen(s1) > strlen(s2) ? strlen(s1) : strlen(s2);;
	for(int i=0;i<len;i++) {
		if(s1[i]!=s2[i]) {
			flag=1;
			break;
		}
	}
	if(flag==1) 
		printf("no ");
	else
		printf("yes ");
		
	
	return 0;
}
