#include <stdio.h>

int main() 
{
    int a[10000],n,k;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	int j,ki,max=0;
	while(j<k)
	{
	    scanf("%d",&ki);
	    a[n]=ki;
	    n++;
	   for(int i=0;i<n;i++)
	    {
	        if(a[i]>=max)
	        {
	            max=a[i];
	        }
	    }
	    printf("%d ",max); 
	 j++; 
	 }
	return 0;
}
