#include <stdio.h>
#include<string.h>
int main()
{
	char a[10];
	scanf("%s",a);
	int n=strlen(a);
	int k;
	scanf("%d",&k);
	for(int i=0;i<k;i++)
	{
	    char temp=a[0];
	    int j;
	    for(j=0;j<n-1;j++)
 	    {
	        a[j]=a[j+1];
	    }
	    a[j]=temp;
	   
	}
	printf("%s",a);
	return 0;
}
