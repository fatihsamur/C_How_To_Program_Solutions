#include<stdio.h>
#include<math.h>

void rootChecker(double a, double b, double c, double x1, double x2);

int main(void)
{
    double a, b, c, discriminant, root1, root2;
    printf("Enter coefficients of equation ax^2 + bx + c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    discriminant = sqrt(b * b - 4 * a * c);
    if (discriminant >= 0)
    {
        root1 = (-b + discriminant) / (2 * a);
        root2 = (-b - discriminant) / (2 * a);
        printf("Roots of the equation: %.2f and %.2f\n", root1, root2);
        rootChecker(a, b, c, root1, root2);
    }else
    {
        printf("Equation have no solution on real numbers!\n");
    }
    
}

void rootChecker(double a, double b, double c, double x1, double x2)
{
    if (0 == ceil(a * x1 * x1 + b * x1 + c - 0.5))
    {
        printf("Root1 = %.2f works well!\n", x1);
        printf("for x = %.2f; ax^2 + bx + c = %f\n", x1, ceil(a * x1 * x1 + b * x1 + c - 0.5));
    }else
    {
        printf("Root1 = %.2f doesn't work!\n", x1);
        printf("for x = %.2f; ax^2 + bx + c = %f\n", x1, ceil(a * x1 * x1 + b * x1 + c - 0.5));
    }
    if (0 == a * x2 * x2 + b * x2 + c)
    {
        printf("Root2 = %.2f works well!\n", x2);
    }else
    {
        printf("Root2 = %.2f doesn't work!\n", x2);
        printf("for x = %.2f; ax^2 + bx + c = %f\n", x2, a * x1 * x1 + b * x1 + c);
    }
}
