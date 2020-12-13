#include<stdio.h>

int HCD(int x, int y);
int LCM(int x, int y);

int main(void)
{
    int x, y;
    printf("Enter x and y: ");
    scanf("%d%d", &x, &y);
    printf("EKOK: %d\nEBOB: %d\n", HCD(x, y), LCM(x, y));
    
    return 0;
}
// EBOB hesaplayici
int LCM(int x, int y)
{
    return ((x * y) / HCD(x, y));
}
// EKOK hesaplayici
int HCD(int x, int y)
{
    int divisor = 2, highestCommonDivisor = 1;
    while (x != 1 || y != 1)
    {
        if ((x % divisor == 0) || (y % divisor == 0))
        {
            if ((x % divisor == 0) && (y % divisor == 0))
            {
                highestCommonDivisor *= divisor;
            }
        }
        
        if (x % divisor == 0)
        {
            x /= divisor;
        }
        
        if (y % divisor == 0)
        {
            y /= divisor;
        }
    
        if ((x % divisor != 0) && (y % divisor != 0))
        {
            divisor++;
        }
    }
    
    return highestCommonDivisor;
}