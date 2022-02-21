#include <stdio.h>

int main(){
    int k = 1, r;
    printf("Enter the range: ");
    scanf("%d", &r);

    for (int i=1; i <= r; i++)
    {
        for (int j = 1; j<= i; j++, k++)
        {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}