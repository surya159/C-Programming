#include <stdio.h>
#include<string.h>
int main() 
{
    char a[10];
    int flag=0;
    scanf("%s",x);
    int n=strlen(x);
    for(int i=0;i<n;i++)
    {
        if(x[i]>='0'&&x[i]<='9')
        {
            flag=0;
        }
        else
        {
            flag=1;
            printf("No");
            break;
        }
    }
    if(flag==0)
    {
        printf("Yes");
    }
    return 0;
}
