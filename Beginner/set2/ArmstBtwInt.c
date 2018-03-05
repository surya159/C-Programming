#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,temp,num,rem;
	printf("Enter the nos");
	scanf("%d %d",&a,&b);
    for(int i=a+1;i<=b;++i)
    {
      temp=i;
      num=0;
    	while(temp!=0)
        {
          rem=(temp%10);
          num+=rem*rem*rem;
          temp/=10;
        }
        if(i==num)
        {
          printf("%d ",i);
        }
    }
	return 0;
}
