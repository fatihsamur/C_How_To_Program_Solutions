#include<stdio.h>
#include<math.h>

// triangles printing; exercises 4.16

int main(int argv, char const argc[])
{
    int height, i, j, k;
    printf("Enter height: ");
    scanf("%d", &height);
    for (i = 0; i < height; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%s", "#");
        }
        puts("");
    }
    puts("");
    for (i = height; i > 0 ; i--)
    {
        for (j = 0; j < i; j++)
        {
            printf("%s", "#");
        }
        puts("");
    }
    puts("");
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (k = 0; k < height - i; k++)
        {
            printf("%s", "#");
        }
        puts("");
    }
    puts("");
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }
        for (k = 0; k < i + 1; k++)
        {
            printf("%s", "#");
        }
        puts("");
    }
    puts("");

    return 0;

}