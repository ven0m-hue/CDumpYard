#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int r=3, c=4, count;

    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int brr[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int k = 0;
    int j = 0;
    for (int i = 0; i < r; i++)
    {
         
        for (j ; j < c; j++)
        {
            //printf("\n%d ", arr[i][j]);
            printf("\n%d ", brr[j]);
        }
        
        j +=4; 
        c +=4;
    }

    return 0;
}
