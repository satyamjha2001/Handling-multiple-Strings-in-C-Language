#include<stdio.h>
#include<string.h>
int main() {
char str[5][20];
int i;
printf("Enter 5 email: \n");
for(i=0;i<5;i++)
gets(str[i]);
printf("Emails which do not contain '@' are: \n");
for(i=0;i<5;i++)
{
    if(strchr(str[i],'@')==0)
    {
        printf("%s\n",str[i]);
    }
}
return 0;
}