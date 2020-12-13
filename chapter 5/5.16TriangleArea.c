#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int isValid(double x, double y, double z);
double areaOfTriangle(double x, double y, double z);

int main(int argv, char const argc[])
{   
    double x, y, z;
    printf("Enter sides of triangle: ");
    scanf("%lf%lf%lf", &x, &y, &z);
    if (isValid(x, y, z))
    {
        printf("Area of the triangle is: %.2f\n", areaOfTriangle(x, y, z));
    }
    else
    {
        printf("There is no such triangle!\n");
    }
    
    return 0;
}

int isValid(double x, double y, double z)
{
    if ((x + y > z) && (x + z > y) && (y + z > x) && (x > 0) && (y > 0) && (z > 0))
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

double areaOfTriangle(double x, double y, double z)
{
    double S = (x + y + z) / 2;
    return sqrt(S * (S - x) * (S - y) * (S - z));
}