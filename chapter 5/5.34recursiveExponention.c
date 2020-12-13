#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int power(int x, int y);

int main(void)
{
    int x, y;
    printf("Enter x and y; to calculate x^y: ");
    scanf("%d%d", &x, &y);
    printf("x to the y'th power is %d\n\n", power(x, y));

    return 0;    

}


// recursive exponential calculator
int power(int x, int y)
{
    if (y == 1)
    {
        return x;
    }
    else
    {
        return (x * power(x, y - 1));
    }
}