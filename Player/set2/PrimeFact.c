#include <stdio.h>

int main()
{
    int no, flag;
    scanf("%d", &no);
    for(int i=2; i<=no; i++)
    {
        if(no%i==0)
        {
            flag=1;
            for(int j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    flag=0;
                    break;
                }
            }
	if(flag==1)
            {
                printf("%d ", i);
            }
        }
    }

    return 0;
}
