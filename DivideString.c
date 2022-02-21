#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* substr(const char* str, int m, int n);

char getSecondMostFreq(char *str)
{
    int count[256] = {0}, i;
    for (i = 0; str[i]; i++)
    {
        (count[str[i]])++;
    }
    int f = 0, s = 0;
    for (int i = 0; i < 256; i++)
    {
        if(count[i] > count[f])
        {
            s = f;
            f = i;
        }
        else if(count[i] > count[s] && count[i] <= count[f])
            s = i;
    }
    return s;
    
}


void divString(const char* s, int n)
{
    if(strlen(s)%n != 0) return;

    int div = strlen(s)/n;
    int i = 0;
    while(i < strlen(s))
    {
        printf("%s\n", substr(s, i, div+i));
        i += div;
    }

}

int main(int argc, char const *argv[])
{
    /* code */
    char* str = "venkateshNayak";
    divString(str, 2);
    char* res = substr(str, 2,14);
    printf("\n%c", getSecondMostFreq(str));
    return 0;
}

char* substr(const char* str, int m, int n)
{
    char* res = (char *) malloc(sizeof(char) * (n-m + 1));
    int i = 0;
    for (i = m; i < n && str[i] != '\0'; i++)
    {
        *res = str[i];
        res++;
    }

    *res = '\0';
    return res - (n-m);
}
