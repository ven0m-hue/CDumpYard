// binary search using recursive function 
#include <stdio.h>
// prototype 
int binarysearch( int arr[], int f, int l, int x){
    if (f<= l){
        int m = f + (l - f)/ 2;

        if (arr[m] == x)
            return m;

        if (arr[m] < x)
            return binarysearch(arr, m+1, l, x);

        else
            return binarysearch(arr, f, m-1, x);
    }
    return -1;
}

int main(void){
    int arr[] = {2, 5, 10, 15, 16, 20};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int x = 16;
    int result = binarysearch(arr, 0, n - 1, x);

    (result == -1) ? printf("Not in this array") : printf("your key is found at index %d", result+1);

    return 0;
}