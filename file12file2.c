#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char* string = NULL;
    int size = 20;
    FILE* fp1;
    FILE* fp2;
    int bytes_read;
    int space = 0, tab = 0, line = 0,character = 0;
    fp1 = fopen("hell.c", "w");
    char ch;
    if (fp1 == NULL)
    {
        printf("File is not present in the directory\n");
        exit(1);
    }

    fp2 = fopen("getline.c", "r");

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
            bytes_read = getline(&string, &size,fp2);

            fputs(string, fp1);

            fputs("\n", fp1);
        }

        fclose(fp1);

        fclose(fp2);

        fp1 = fopen("hell.c", "r");
        if (fp1 == NULL)
        {
            printf("Parsing Error \n");
        }
        else{

            while(ch != EOF)
                {
                    ch = fgetc(fp1);

                    character++;
                    if(ch == ' ')
                        space++;

                    else if(ch == '\t')
                        tab++;

                    else if(ch == '\n')
                        line++;
                }
        }

        fclose(fp1);

        printf("\nNumber of Characters = %d\n", character);
        printf("\nNumber of Tabs       = %d\n", tab);
        printf("\nNumber of New Lines  = %d\n", line);
        printf("\nNumber of Spaces     = %d\n", space);

        printf("File is succefully overwritten\n");
        
        printf("End");

        return 0;
    }