#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int JumpSearch(int*, int, int, int);

int JumpSearch(int *arr, int n, int jump, int key){

    int start = 0, end = jump;

    while(end<n){
        if(arr[end] < key){
            start = end;
            end += jump;
        }

        else{

            while(start <= end){
                if (arr[end] == arr[start])
                {
                    return start;
                }

                start++;
            }
        }
    }

    return -1;

}

int main(int argc, char const *argv[])
{
    int* arr = NULL;
    int lenght, jump= 0, key;

    printf("Enter the lenght of the array and search element: ");
    scanf("%d %d", &lenght, &key);

    arr = (int *) malloc(lenght * sizeof(arr));

    jump = sqrt(lenght);

    if(arr != NULL)
    {   
        printf("Enter a sorted array");
        for (int i = 0; i < lenght; i++)
        {
            scanf("%d", &arr[i]);
        }

        int result = JumpSearch(arr, lenght, jump, key);

        if (result == -1) printf("Search element is not found\n");
        else printf("Search element found at: %d\n", result);
        
    }
    return 0;
}
