#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int x=n-m;
    if(x%2 == 0)
    {
    	printf("even");
    }
    else 
	printf("odd");
    
    return 0;
}
