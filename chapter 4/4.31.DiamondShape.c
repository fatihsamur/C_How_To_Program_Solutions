#include<stdio.h>
#include<math.h>

int main(int argv, char const argc[])
{
    int height, mean, i, j;
    printf("Enter height of diamond-An odd number from 1 to 19: ");
    scanf("%d", &height);
    mean = height / 2;
    for (i = 0; i < mean; i++)
    {
        for (j = 0; j < mean - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            printf("%s", "*");
        }
        printf("\n");
    }
    for (i = 0; i < height; i++)
    {
        printf("%s", "*");
    }
    printf("\n");
    for (i = mean - 1; i >= 0; i--)
    {   
        for (j = 0; j < mean - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            printf("%s", "*");
        }
        printf("\n");
    }


    return 0;

}