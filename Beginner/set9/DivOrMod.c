#include <stdio.h>
#include <math.h>

int main(void) {
	char k;
	long int n1,n2,temp;
	scanf("%ld %c %ld",&n1,&k,&n2);
	switch(k) {
	case '/':
	temp=n1/n2;
	printf("%ld",temp);
	break;
	case '%':
	temp=n1%n2;
	printf("%ld",temp);
	break;
	default:
	printf("Invalid choice");
	}
	
	return 0;
	}
