#include<stdio.h>

int main(int argv, char const argc[])
{
    int number;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number between 0-30: ");
        scanf("%d", &number);
        while (number < 1 || number > 30)
        {
            printf("Invalid value! Enter a number between 0-30: ");
            scanf("%d", &number);
        }
        for (int j = 0; j < number; j++)
        {
            printf("%s", "*");
        }
        puts("");
    }
    
    return 0;

}