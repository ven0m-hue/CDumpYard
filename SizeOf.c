#include <stdio.h>


#define Sizeof(type) (char*)(&type + 1) - (char*)(&type)


int main(int argc, char const *argv[])
{
    int x = 0;
    int arr[] = {1,2,3,4,5};
    printf("%d", *(&arr+1) - arr);
    return 0;
}
