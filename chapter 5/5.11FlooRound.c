#include<stdio.h>
#include<math.h>

int roundToInteger(double d);
double roundToTenths(double d);
double roundToHundreths(double d);
double roundToThousands(double d);

int main(int argv, char const argc[])
{
    double x = 0;
    while (x != -1)
    {
        printf("Enter a floating point number to round(-1 to end): ");
        scanf("%lf", &x);
        if (x == -1)
        {
            break;
        }
        printf("%.4f round to integer: %d\n", x, roundToInteger(x));
        printf("%.4f round to tenths: %.1f\n", x, roundToTenths(x));
        printf("%.4f round to hundreths: %.2f\n",x , roundToHundreths(x));
        printf("%.4f round to thousands: %.3f\n", x, roundToThousands(x));
    }
    printf("Bis Bald!\n");

    return 0;
}
int roundToInteger(double d)
{
    return floor(d + 0.5);
}
double roundToTenths(double d)
{
    return (floor(d * 10 + 0.5) / 10);
}
double roundToHundreths(double d)
{
    return (floor(d * 100 + 0.5) / 100);
}
double roundToThousands(double d)
{
    return (floor(d * 1000 + 0.5) / 1000);
}