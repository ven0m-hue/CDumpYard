#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char* string = NULL;
    int size = 20;
    FILE* fp1;
    FILE* fp2;
    int bytes_read;

    fp1 = fopen("hell.c", "w");

    if (fp1 == NULL)
    {
        printf("File is not present in the directory\n");
        exit(1);
    }

    fp2 = fopen("linked.c", "r");

    if (fp2 == NULL)
    {
        printf("File is not present in the directory\n");
        exit(1);
    }
    
    string = (char*) malloc(size * sizeof(char));

    printf("Enter your data in the next line\n");
    
    //If the file is not present then exit
        while(bytes_read > 0)
        {
            bytes_read = getline(&string, &size, fp2);

            fputs(string, fp1);

            fputs("\n", fp1);
        }

        fclose(fp1);

        fclose(fp2);

        printf("File is succefully overwritten\n");
        
        printf("End");

        return 0;
    }