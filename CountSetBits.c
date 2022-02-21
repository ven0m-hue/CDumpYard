#include <stdio.h>
// Application. Count the number of bits needed to be flipped from A to B
int CountSetBits(long long int);
//Count the number of the set bits in an integer number 
//#1
int CountSetBits1(long long int n)
{
    int count = 0;

    while(n)
    {
        n &= (n - 1); 
        count++;
    }
    return count;
}
//#2
int CountSetBits2(long long int n)
{
    //Base condition
    if (n == 0) return 0;

    else return 1 + CountSetBits2(n & (n-1));
}
int CountSetBits3(long long int n)
{
    return __builtin_popcount(1);
}

void swapNibbles(unsigned char N)
{
    unsigned char a = N;
    unsigned char L = (a & 0xF);
    unsigned char H = (a >> 4);
    N = 0;
    N |=(L << 4) | H;
    printf("Before Swapping(in Hex): %d | %d = %d", H, L, a);
    printf("\nBefore Swapping(in Hex): %d | %d = %d", L, H, N);
}

void evenB2Zero(long long unsigned int N)
{
    N &= 0xAAAAAAAA;
    printf("%llu", N);
}
int main(int argc, char const *argv[])
{
    //printf("%d, %d, %d", CountSetBits2(7 & ~(1 << 1)), 7 & ~(1 << 1), 7 | (1 << 3));
    swapNibbles(0xAF);
    //evenB2Zero(23);
    return 0;
}
