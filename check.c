#include <stdio.h>
#include <stdlib.h>


#define DC(X) {X*0.033 + 33}

typedef unsigned char     uint8_t;
typedef unsigned short    uint16_t;
typedef unsigned int      uint32_t;
typedef unsigned long int uint64_t;

//#define A 9
void swap(int*, int*);

void swap(int* a, int* b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

int main(void) {
	// your code goes here
	int A = 9;
	int B = 10;
	//uint8_t *ptr1 = (uint8_t *)0x11;
	uint8_t *ptr1 = (uint8_t *) &A;
    uint8_t **dptr = &ptr1;
    uint8_t *ptr2 = *dptr;
    uint8_t foo = *ptr2;
	swap(&A, &B);
	printf("%u", foo);
	printf("\n%d swap %d ", A, B);
	printf("\n%f", DC(1000));

	return 0;
}
//int atexit (void (*swap)(int*, int*));