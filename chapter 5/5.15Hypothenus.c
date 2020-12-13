#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double hypothenus(double x, double y);

int main(int argv, char const argc[])
{   
    double x, y;
    printf("Enter sides of right triangle: ");
    scanf("%lf%lf", &x, &y);
    printf("Hypothenus of right triangle: %.2f\n", hypothenus(x, y));
    
    return 0;
}

double hypothenus(double x, double y)
{
    return sqrt(x * x + y * y);
}