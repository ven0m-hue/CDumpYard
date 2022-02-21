#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int prime(int);

int main(int argc, char const *argv[])
{
    int min, max;
    printf("Enter the range \n");
    scanf("%d %d", &min, &max);

    printf("There we go: ");
    for(int i=min; i<max; i++)
    {
        int pri = prime(i);
        if(pri != 0)
        {
            printf("%d ", pri);
        }
    }

    return 0;
}

int prime(int n)
{
    if (n % 2 == 0)  return 0;
    if (n % 3 == 0)  return 0;
    int root =  sqrt(n);
    int i = 4;
    while(i <= root)
    {
        if(n % i == 0) return 0;
        i++;
    }
    return n;
}