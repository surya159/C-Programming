#include <stdio.h>
#include <string.h>

int main(void) {
	// your code goes here
	char str[10];
	int a[10],i,j,len,sum=0;
	printf("Enter the Roman Numerals\n");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		switch(str[i])
		{
			case 'I': a[i]=1; break;
			case 'V': a[i]=5; break;
			case 'X': a[i]=10; break;
		}
	}
	sum=a[len-1];
	for(i=len-1;i>0;i--)
	{
		if(a[i]>a[i-1])
		{
			sum=sum-a[i-1];
		}
		else
		{
			sum=sum+a[i-1];
		}
		
	}
	printf("Equilvalent Numerical value is %d\n",sum);
	

	return 0;
}
