#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mian()
{
    FILE *fp;
    char* string = NULL;
    int size = 10;
    int bytes_read;

    // Data to be written 
    string = (char *) malloc( size * sizeof(char));
    printf("Enter your text in the next line\n");
    bytes_read = getline(&string, &size, stdin);
    
    fp = fopen("GfgTest.c", "w");

    if(fp == NULL)
        {

            printf("Print.txt failed to open or not found.\n");

        }
    else{

        printf("The file is now opened.\n") ;

            if(bytes_read > 0)
            {
                fputs(string, fp); 
                fputs("\n", fp) ;
            }
        
        fclose(fp);

        printf("Data successfully written in file GfgTest.c\n");
        printf("The file is now closed.") ;

        }
    return 0;
}