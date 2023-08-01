#include<stdio.h>
#include<string.h>
int main() {
char str[5][20],item[20];
int i,r=-1;
printf("Enter 5 strings:\n");
for(i=0;i<5;i++)
gets(str[i]);
printf("Enter string for search:\n");
gets(item);
for(i=0;i<5;i++)
{
    r= strcmp(str[i],item);
    if(r==0)
    break;
}
if(r==0)
printf("%s is found in the list");
else
printf("%s is not found in the list");
return 0;
}