#include <stdio.h>
int main(int argc, char const *argv[])
{
    char string[30];
    char * ptr = NULL;
    int i = 0;
    printf("Input a string :");
    gets(string);
    while (string[i] != '\0')
    {
        ptr = &string[i];
        i++;
    }
    printf("Pointer : Print a string in reverse order :\n");
    printf("input string :%s\n",string);
    printf("Reverse of the string is :");
    while (*ptr != string[0])
    {
        printf("%c",*ptr);
        ptr--;
    }
    printf("%c",*ptr);
    return 0;
}
