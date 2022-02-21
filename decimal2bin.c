#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int grayCode(int n)
{
    return (n ^ n>>1);
}

// Prototypes
void decToBinary(int,int);
void decToHex(int);
void decToOct(int);

void binToDec(char*);
void binToHex(int);
void binToOct(int);

void HexToBinary(int);
void HexToDec(int);
void HexToOct(int);

void OctToBinary(int);
void OctToDecimal(int);
void OctToHex(int);


int generateCode(int n)
{
    int a = 0;
    for (int i = 0; i < 2*n; i++)
    {
        a = grayCode(i);
        decToBinary(a, n);
        printf(" ");
    }
    
}
int main(){
    int n = 2;
    //printf("Enter the number");
    //scanf("%d", &n);
    generateCode(n);
    //decToBinary(3,2);
    //char* str = "101010101010101010101";
    //binToDec(str);
   // decToHex(n);
    //decToOct(n);
}

void decToBinary(int n, int r){

    for(int i=r-1; i>=0; i--)
        (n & (1<<i)) ? printf("1") : printf("0");

    //printf("\n");
}

void decToHex(int n){

    char hex[] = "0123456789ABCDEF";
    char* output = (char*) malloc (sizeof(char) + 3);

    strcpy(output, "0x00000000"); // 8 bits represents 64 bit data in hexa (1 hexa = 4 bits, half byte)

    char* ptr = hex;

    int i = 10;

    while (n > 0)
    {
        output[--i] = hex[(n & 0xF)];
        n >>= 4;
    }
   
    puts(output);
    printf("\n");
      
}

void decToOct(int num){
    int len = sprintf(NULL, 0, "%d", num);
    char* string = (char*) malloc(len+1);
    // since its octal 2^3 = 8, group them in 3's so for a 32bit int 31st and 30th bit is discared
    // The implication of discarding the bit is that for a negative number the sign won't be preserved
    // leading to a different result. for ex. -7 will return 77777777777 instead of 37777777777
    // To counter this problem we need to typecast the int to unsigned int 
    for(int i=10; i>=0; i--){
        sprintf(string, "%d", (((unsigned int)num >> i*3) & 0b111));
        printf("%s", string);
    }
    printf("\n");
}

void binToDec(char* str)
{
    int n = strlen(str);  //Get the length of the string
    const int i = n -1;   // Store the length of the string - 1 --> actual length
    int res = 0;      
    while( --n >= 0)   // Predecrement
        res +=  (*(str + n) - '0') << (i - n);  // Convert the char bit to actual bit and shift appropriately
    printf("\n%d ", res);
}