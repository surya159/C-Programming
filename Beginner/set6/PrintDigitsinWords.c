#include <stdio.h>
#include <string.h>
int main(void) {
	// your code goes here
	char s[10];
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++)  {
		
	switch (s[i])
	{
		case '0':printf("zero");
            	     break;
		case '1':printf("One ");
            	     break;
		case '2':printf("Two ");
            	     break;
		case '3':printf("Three ");
		     break;
		case '4':printf("Four ");
            	     break;
		case '5':printf("Five ");
            	     break;
		case '6':printf("Six ");
            	     break;
		case '7':printf("Seven ");
            	     break;
		case '8':printf("Eight ");
            	     break;
		 case '9':printf("Nine ");
            	     break;
	}
	}
	return 0;
}
