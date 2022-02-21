// Gray to Binary and Binary to gray 
#include <stdio.h>
int Gray2binary( int num){

	return num ^ num >> 1;

}

int Binary2gray(int num){
	int mask = 0;
	while(mask){
		
		mask >>= 1;
		num ^= mask;
	}
	return num;
}

int main(){

	int num, choice;
	printf("Enter the case no. 1 for bin 2 for gray");
	scanf("%d", &choice);
	
	
	switch(choice){
	
	case 0 : printf("Enter the no. in bin\n");
			 scanf("%d", &num);
			 int res = Binary2gray(num);
			 printf("%d", res);
			 break;
	case 1 : printf("Enter the no. in gray\n");
			 scanf("%d", &num);
			 printf("%d",Gray2binary(num));
			 break;
    }

}