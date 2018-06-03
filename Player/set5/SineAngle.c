#include <stdio.h>
#include <math.h>
#define pi 3.14

int main()
{
   int n;
   scanf("%d",&n);
   float ans=sin(n*pi/180);
   printf("%.1f",ans);
   return 0;
}
