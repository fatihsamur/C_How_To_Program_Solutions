#include<stdio.h>

int HCD(int, int);
int LCM(int, int);

int main(void)
{
    int i1, i2;
    printf("Enter two integers: ");
    scanf("%d%d", &i1, &i2);
    printf("EBOB(%d, %d) = %d\nEKOK(%d, %d) = %d\n", i1, i2, HCD(i1, i2), i1, i2, LCM(i1, i2));

    return 0;
}
// EBOB
int HCD(int x, int y)
{
    if (y == 0)
    {
        return x;
    }else
    {
        return HCD(y, x % y);
    }
}
// EKOK
int LCM(int x, int y)
{
    return ((x * y) / HCD(x, y));
}
