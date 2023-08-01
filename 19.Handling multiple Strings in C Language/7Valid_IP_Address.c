#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
char str[]="127.0.0.1000";
char *a=strtok(str,".");
int f=0,x;
while(a!=NULL)
{
    x=atoi(a);
    if(0<=x && x<=255)
    {
        f++;
    }
    a=strtok(NULL,".");
}
if(f==4)
printf("Valid IP.");
else
printf("Invalid Ip.");
return 0;
}