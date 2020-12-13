#include<stdio.h>
#include<math.h>

void roots(double a, double b, double c);

int main(void)
{
    double a, b, c;
    printf("Enter coefficients of equation ax^2 + bx + c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    roots(a, b, c);

}
void roots(double a, double b, double c)
{
    double discriminant, root1, root2;
    discriminant = sqrt(b * b - 4 * a * c);
    if (discriminant >= 0)
    {
        root1 = (-b + discriminant) / (2 * a);
        root2 = (-b - discriminant) / (2 * a);
        printf("Roots of the equation: %.2f and %.2f\n", root1, root2);
    }
    else
    {
        printf("Equation have no solution on real numbers!\n");
    }
}


    