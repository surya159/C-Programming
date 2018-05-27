#include <stdio.h>
#include <string.h>

int main(void) {
	int temp;
	char str[50];
            scanf("%s",str);

	   for(int i=0; i<strlen(str)-1; ++i) {
		for(int j=i+1; j<strlen(str) ; ++j)
		{
            	if(str[i]>str[j])
            	{
            	temp=str[i];
            	str[i]=str[i+1];
            	str[i+1]=temp;
            	}
		}}

		printf("%s",str);
		
		 return 0;

		}
