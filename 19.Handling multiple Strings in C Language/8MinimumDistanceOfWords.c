#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
char str[5][20];
char word1[10];
char word2[10];
int w1=-1,w2=-1,i,min;
printf("\n\n*****Program to find the minimum distance between two words.*****\n\n");
printf("Enter 5 words\n");
for(i=0;i<5;i++)
scanf("%s",str[i]);
printf("Enter the 1st word from the above list.\n");
scanf("%s",word1);
printf("Enter the 2nd word from the above list.\n");
scanf("%s",word2);
for(i=0;i<5;i++)
{
    if(strcmp(str[i],word1)==0)
    w1=i;
    if(strcmp(str[i],word2)==0)
    w2=i;
    if(w1!=-1 && w2!=-1)
    min=abs(w2-w1);
}
printf("%d is the minimum distance of the given two words in the list of strings.",min-1);
return 0;
}