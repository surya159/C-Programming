#include <stdio.h>

int main(void) {
	// your code goes here
	char x;
	printf("Give a character\n");
	 scanf("%c",&x);
 
	if (( x >= 'a' && x <= 'z') || ( x >= 'A' && x <= 'Z')) 
	{
		 printf("Alphabet\n");	
	}
	else
		 printf("Not an alphabet\n");
 
	return 0;
}
