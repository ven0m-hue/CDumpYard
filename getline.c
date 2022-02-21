#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 10;
    char* string = NULL;
    int byte_read = 0;
    // dynamically allocate the memory
    printf("Hello Crypto\n");
    printf ("Please enter a string: ");
    string = (char *) malloc( n * sizeof(char));
    if(string != NULL){
        
    byte_read = getline(&string, &n, stdin);
    
    if(byte_read == -1)
        printf("ERROR");
    else{
        
        puts ("You entered the following string: \n");
        puts(string);
        
        printf ("\nCurrent size for string block: %d\n", byte_read);
    
        }
    
    }
    else
        printf("Memory allocation failed\n");
    free(string);
return 0;
}

