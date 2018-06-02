#include <stdio.h>
#include <string.h>

int main(void) {
	char s[30],ans;
	int max=0,count=0;
	scanf("%[^/t]s",s);
	for(int i=0;i<strlen(s)-1;i++) {
		for(int j=i+1;j<strlen(s);j++) {
			if(s[i]==s[j]) {
				count=count+1;
			}
			if(count>max) {
				max=count;
				ans=s[i];
			}
		}
	}
	printf("%c",ans);
	return 0;
}
