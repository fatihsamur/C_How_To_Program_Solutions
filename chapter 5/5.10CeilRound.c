#include<stdio.h>
#include<math.h>

int main(int argv, char const argc[])
{
    int y;
    double x;
    do
    {
        printf("Enter a number to round nearest integer(-1 to end): ");
        scanf("%lf", &x);
        y = ceil(x - 0.5);
        printf("%.3f ~ %d\n", x, y);
    } while (x != -1);
    

    return 0;
}