#include <stdio.h>
#include <math.h>

int main()
{ 
    int n,k;
    scanf("%d %d",&n,&k);
    long int ans=pow(n,k);
    printf("%ld",ans);
    return 0;
}
