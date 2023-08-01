#include<stdio.h>
void find(char str[5][100]);
int main() {
char str[5][100];
int i;
printf("Enter Your Five strings: ");
for(i=0;i<5;i++)
fgets(str[i],100,stdin);
find(str);
return 0;
}
void find(char str[5][100])
{
    int i,j,k,count;
    char v[]={"aeiouAEIOU"};
    for(i=0;i<5;i++)
    {   count=0;
        for(j=0;str[i][j];j++)
        {
            for(k=0;k<10;k++)
            {
                if(str[i][j]==v[k])
                {
                    count++;
                    break;
                }
            }
        }
        printf("vowels in number %d string is %d\n",i+1,count);
    }
}