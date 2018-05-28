#include <stdio.h>
#include <math.h>

int main()
{ 
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    int AP= (C/2)*(2*A+(C-1)*B);
    printf("%d",AP);
    return 0;
}
