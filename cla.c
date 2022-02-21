// C program to illustrate
// command line arguments
#include<stdio.h>

int main(int arg,char* argv[])
{
	int counter;
	printf("Program Name Is: %s",argv[0]);
	if(arg==1)
		printf("\nNo Extra Command Line Argument Passed Other Than Program Name");
	if(arg>=2)
	{
		printf("\nNumber Of Arguments Passed: %d",arg);
		printf("\n----Following Are The Command Line Arguments Passed----");
		for(counter=0;counter<arg;counter++)
			printf("\nargv[%d]: %s",counter,argv[counter]);
	}
	return 0;
}
