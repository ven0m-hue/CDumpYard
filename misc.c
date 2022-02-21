#include <stdio.h>

int main(void) {
	// your code goes here
	int n = 9;
	int i = 31;
	while( i > 0)
    {
        n ^= (n>> 1);
        i--;
    }
	    
	    
    printf("%d", n);
	return 0;
}

