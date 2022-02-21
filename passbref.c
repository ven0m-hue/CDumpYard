#include <stdio.h>
#include <string.h>

void swap(char* a, char* b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(char* str)
{
    int n = strlen(str);
    for (int  i = 0; i < n/2; i++)
    {
        swap(&str[i],&str[n - i]);
    }
    
}
 
int main()
{
    char* str = "Hello";
    reverse(str);
  	printf("\n String after Reversing = %s", str);
  	
  	return 0;
}