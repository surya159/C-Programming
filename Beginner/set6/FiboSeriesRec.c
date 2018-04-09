#include <stdio.h>
int Fib(int);
 
int main()
{
   int n,i=0,c;
   scanf("%d",&n);
 
   for (int c=1;c <= n;c++)
   {
      printf("%d ", Fib(i));
      i++; 
   }
 
   return 0;
}
 
int Fib(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( Fib(n-1) + Fib(n-2) );
} 
