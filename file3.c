// C program to Open a File,
// Write in it, And Close the File

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int main( )
{

	// Declare the file pointer
	FILE *filePointer ;
    char* string = NULL;
    int size = 10;
    int bytes_read;
	
    string = (char *) malloc( size * sizeof(char));
	printf("Enter the data in the next line \n");
    bytes_read = getline(&string, &size, stdin);

	filePointer = fopen("GfgTest.c", "w") ;
	
	// Check if this filePointer is null
	// which maybe if the file does not exist
	if ( filePointer == NULL )
	{
		printf( "GfgTest.c file failed to open." ) ;
	}
	else
	{
		
		printf("The file is present. And data is being Overwritten\n") ;
		
		// Write the dataToBeWritten into the file
		if ( bytes_read > 0 )
		{
			
			// writing in the file using fputs()
			fputs(string, filePointer) ;
			fputs("\n", filePointer) ;
		}
		
		// Closing the file using fclose()
		fclose(filePointer) ;
		
		printf("Data successfully written in file GfgTest.c\n");
		printf("The file is now closed.") ;
	}
	return 0;		
}
