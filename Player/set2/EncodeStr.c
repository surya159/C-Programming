#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    scanf("%s", s);
    for(int i=0; i<strlen(s); i++)
    {
    	if((s[i]>=65 && s[i]<=87) || (s[i]>=97 && s[i]<=119)) {
		s[i]=s[i]+3;
	}
	else if((s[i]>=88 && s[i]<=90) || (s[i]>=120 && s[i]<=121)) {
		s[i]=s[i]-23;
	}
    }
    printf("%s",s);

    return 0;
}
