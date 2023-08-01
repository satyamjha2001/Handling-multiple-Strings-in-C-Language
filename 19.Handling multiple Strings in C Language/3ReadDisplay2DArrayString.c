#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char s[5][10];
    printf("Enter 5 names:\n");
    for (i = 0; i < 5; i++)
        gets(s[i]);
    printf("Your 5 names:\n");
    for (i = 0; i < 5; i++)
        puts(s[i]);
    return 0;
}