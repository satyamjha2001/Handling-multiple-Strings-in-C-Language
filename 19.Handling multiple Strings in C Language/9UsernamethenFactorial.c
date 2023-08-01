#include <stdio.h>
#include <string.h>
void factorial();
int main()
{
    char str[5][20] = {"Ram", "Sita", "Laxman", "Krishna", "Satyam"};
    int i;
    printf("\nEnter the username for calculating factorial.\n");
    char un[20];
    gets(un);
    for (i = 0; i < 5; i++)
    {
        if (strcmp(str[i], un) == 0)
        {
            printf("\n\n*****Congratulations!!!*****\n\n***You can Calculate Factorial.***\n\n");
            factorial();
            break;
        }
    }
    if (i == 5)
    {
        printf("\nSorry you entered wrong username!!\nYou won't able to calculate factorial.\nThank You.");
    }
    return 0;
}
void factorial()
{
    long long int fact = 1;
    int n;
    printf("Enter your number to calaculate factorial.\n");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Please enter valid number.");
    }
    else if (n == 1 && n == 0)
        printf("factorial = 1");
    else
    {
        while (n > 1)
        {
            fact = fact * n;
            n--;
        }
        printf("Factorial = %d", fact);
    }
}