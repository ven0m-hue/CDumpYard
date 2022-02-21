#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int power(int, int);
int arrtoi(char*, long long int);
int myatoi(const char* str);
int main(){
    char str[] = "012443223";
    //char* s = str;
    int n = sizeof(str)/sizeof(char);
    long long int num = 0;
    //num = arrtoi(str, n);
    num = myatoi(str);
    printf("%lld", num);
    return 0;
}

int myatoi(const char* str)
{
    int sign = 1, res = 0, i = 0;

    if(str[0] == '-') 
    {
        sign = -1;
        i++;
    }
    

    for (; str[i] != '\0'; i++)
    {
        res = 10 * res + (str[i] - '0');
    }
    
    return res * sign;

}





















int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}

int arrtoi(char* ptr, long long int n){
    long long int num = 0;
    int b;
    for(int i=0; i<n-1 ; i++){

        b = *(ptr+i) - '0';
        num +=  b * power(10, (n-2) - i);
    }
    return num;
}



int maxSubstring(const char* str)
{
    int n = strlen(str);
    int count = 0;
    for (int  i = 0; i < n-1; i++)
    {
        if(str[i] != str[i+1]) count++;
        else
        {
            
        }

    }
    
}