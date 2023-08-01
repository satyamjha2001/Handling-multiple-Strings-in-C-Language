#include<stdio.h>
#include<string.h>
int main() {
int i,j,round,r;
char str[10][20];
char temp[20];
printf("Enter 10 city names: ");
for(i=0;i<10;i++)
gets(str[i]);
for(round=1;round<=9;round++)
{
    for(i=0;i<=9-round;i++)
    {
        r=strcmp(str[i],str[i+1]);
        if(r>0)
        {
            strcpy(temp,str[i]);
            strcpy(str[i],str[i+1]);
            strcpy(str[i+1],temp);
        }
    }
}
printf("\nName of city in ascending order\n");
for(i=0;i<10;i++)
{
    puts(str[i]);
}
return 0;
}