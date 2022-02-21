#include <stdio.h>
#include <stdint.h>
//structure with no members
typedef struct temp
{
    //void *p;  // Bus size 
    __uint128_t a;
}temp;


int main()
{
    //declaring stcurure variable
    temp T;
    
    printf("Size of T: %d\n",sizeof(T));

    return 0;
}
