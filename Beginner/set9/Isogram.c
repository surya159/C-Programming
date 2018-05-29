#include <stdio.h>
#include <string.h>
int main(void) {
	int flag=0;
	char st[20];
	scanf("%s",st);
	for(int i=0;i<strlen(st)-1;i++) {
		for(int j=i+1;j<strlen(st);j++) {
			if(st[i]==st[j]) {
				flag=1;
				break;
			}
		}
	}
	if(flag==1) {
	printf("No ");
	}
	else
		printf("Yes ");
	return 0;
}
 
