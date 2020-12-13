#include<stdio.h>

int isRight(int x1, int x2, int x3);

int main(int argv, char const argc[])
{   
    int x1, x2, x3;
    printf("Enter sides: ");
    scanf("%d %d %d", &x1, &x2, &x3);
    if (isRight(x1, x2, x3))
    {
        printf("These can be sides of a right triangle.\n");
    }
    else
    {
        printf("Nope! Not a right triangle!\n");
    }
    
    return 0;
}

int isRight(int x1, int x2, int x3)
{
    if ((x1 * x1 + x2 * x2 == x3 * x3) || (x1 * x1 + x3 * x3 == x2 * x2) || (x1 * x1 == x2 * x2 + x3 * x3))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}