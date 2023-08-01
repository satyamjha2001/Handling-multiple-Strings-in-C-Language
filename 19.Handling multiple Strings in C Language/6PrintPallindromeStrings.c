#include<stdio.h>
#include<string.h>
int pellindrome(char a[])
{
    int i,j;
    for(j=0;a[j];j++);
        for(i=0;i<j/2;i++)
        {
            if(a[i]!=a[j-1-i])
            return 0;
        }
    return 1;
}
int main() {
char str[5][10]={"satyam","level","malayalam","abba","haah"};
int i;
for(i=0;i<5;i++)
{
    if(pellindrome(str[i]))
    printf("%s\n",str[i]);
}
return 0;
}