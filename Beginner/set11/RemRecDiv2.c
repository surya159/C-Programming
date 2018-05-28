#include <stdio.h>

int div2(int n)
{
    if(n%2==0)
    {
        n/=2;
        return div2(n);
    }
    else
    {
        return n;
    }
    
}
int main()
{ 
    int no;
    scanf("%d",&no);
    int ans=div2(no);
    printf("%d",ans);
    return 0;
}
