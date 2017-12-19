#include <stdio.h>

int main(void) {
	// your code goes here
	char x;
	printf("Give a character\n");
	 scanf("%c",&x);
 
	if (( x >= 'a' && x <= 'z') || ( x >= 'A' && x <= 'Z')) 
	{
		if (x=='a' || x=='A' || x=='e' || x=='E' || x=='i' || x=='I' || x=='o' || x=='O' || x== 'u' || x=='U')
			printf("The character %c is a vowel\n",x);
		else
			printf("The character %c is a consonant\n",x);
	}
	else
		 printf("The character %c is not a vowel or a consonant\n",x);
 
	return 0;
}
