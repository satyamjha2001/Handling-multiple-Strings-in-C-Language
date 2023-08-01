#include <stdio.h>
#include <string.h>
int main()
{
    int i, flag = 0;
    char s[3][2][20] = {
        {"satyam", "123"},
        {"Mysirg", "211"},
        {"GeeksforGeeks", "1234"}};
    char name[20];
    char password[20];
    printf("\nEnter your username.\n");
    gets(name);
    printf("\nEnter your password.\n");
    gets(password);
    for (i = 0; i < 3; i++)
    {
        if (strcmp(name, s[i][0]) == 0 && strcmp(password, s[i][1]) == 0)
        {
            printf("Username and Password is matched.");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Invalid Credentials!!");
    }
    return 0;
}