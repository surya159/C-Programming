#include <stdio.h>

int main(void) {
	// your code goes here
	int n, t1 = 0, t2 = 1, next;
    
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i)
    {
        printf("%d ", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
	return 0;
}
