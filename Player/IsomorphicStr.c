#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[50],s2[50];
	int l1,l2,flag=0;
	scanf("%s %s",s1,s2);
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1==l2)
	{
		for(int i=0;i<l1;i++){
			for(int j=i+1;j<l2;j++) {
				int a=s1[i];
				int b=s1[j];
				int c=s2[i];
				int d=s2[j];
				if((a-b)!=(c-d)) {
					flag=0;
					break;
				}
				else 
				{
					flag=1;
				}				
				
			}
		}
	}
	if(flag==1)
	{
		printf("yes");
	}
	else 
		printf("no ");
	
	return 0;
}
