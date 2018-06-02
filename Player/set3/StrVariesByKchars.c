#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[30],s2[30];
	scanf("%s",s1);
	scanf("%s",s2);
	int k,count=0;
	scanf("%d",&k);
	int n1=strlen(s1);
	int n2=strlen(s2);
	int len= n1>n2? n1: n2;;
	for(int i=0;i<len;i++) {
		if(s1[i]!=s2[i]) {
			count=count+1;
		}
		
	}
	if(count==k)
		printf("yes ");
	else
		printf("no ");

	return 0;
}
