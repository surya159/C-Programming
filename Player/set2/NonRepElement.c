#include<stdio.h>
int main()
{
    int n,a[n],count[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        count[i]=1;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count[i]=count[i]+1;
                a[j]='$';
            }
            
        }
        if((count[i]==1) && (a[i]!='$'))
        {
             printf("%d ",a[i]);
        }
    }
    
 return 0;  
}
