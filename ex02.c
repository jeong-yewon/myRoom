#include <stdio.h>
#include <string.h>

int main()
{
    char* stringArray[10];
    char numString[10];

    for(int i=0; i<10; i++)
    {
        sprintf(numString, "String_%02d", i);
        stringArray[i] = strdup(numString);
    }
    for(int i=0; i<10; i++)
    {
        printf("%2d번째 문자열 : %s\n", i, stringArray[i]);
    }
    return 0;

}