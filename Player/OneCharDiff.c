#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[50],s2[50];
	int l1,l2,count=0;
	scanf("%s %s",s1,s2);
	l1=strlen(s1);
	l2=strlen(s2);

	if(l1==l2)
	{
		for(int i=0;i<l1;i++){
			if(s1[i]!=s2[i]) {
				count=count+1;
			}
		}
	}
	if(count==1) {
		printf("yes ");
	}
	else
		printf("no ");
		
	return 0;
}
