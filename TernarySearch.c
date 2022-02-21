#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define MAX 50
int TernarySearch(int *Array, int l, int r, int key);

int TernarySearch(int *Array, int l, int r, int key){

    int mid1 = l + (r-l)/3; 
    int mid2 = r - (r-l)/3;

    if(l>r)
        return -1;

    else if(Array[mid1] == key)
        return mid1;

    else if(Array[mid2] == key)
        return mid2;

    else if(key > Array[mid1] && key < Array[mid2]){
        mid1 = mid1 + 1;
        mid2 = mid2 - 1;
    }

    else if(key < Array[mid1]){
        mid2 = mid1 - 1;
        mid1 = 1;
    }

    else if(key > Array[mid2]){
        mid1 = mid2 + 1;
        mid2 = r;   
    }

    return TernarySearch(Array,mid1,mid2,key);
}

int main(int argc, int **argv[]){

    int* Array = NULL;
    int n, key;

    printf("Enter the length ");
    scanf("%d", &n);
    printf("Enter the key");
    scanf("%d", &key);

    Array = (int*) malloc(n * sizeof(Array));
    if(Array != NULL)
    {   
        printf("Enter a sorted array");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &Array[i]);
        }

        int result = TernarySearch(Array, 0, n, key);
        
        if (result == 1) printf("Key not found\n");
        else printf("Key found at index no. : %d", result);
    }
    return 0;
}