#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h>

#define ll long long int 

ll min(ll a, ll b)
{
    return a < b ? a : b;

}

ll max(ll a, ll b)
{
    return a > b ? a : b;

}



int main(int argc, char const *argv[])
{
	printf("%lld", max(5,2223));
	return 0;
}
