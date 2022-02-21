#include <stdio.h>

int main()
{  
    int* ptr;
    int a = 20;
    printf("%p\n", ptr);
    printf("address of a %p\n", &a);
    printf("%d\n", *ptr);
    
    ptr  = &a;

    printf("address of ptr after assign:%p\n", ptr);
    printf("%dLOLLOLLLLLLLL\n", *ptr);
    return 0;
}