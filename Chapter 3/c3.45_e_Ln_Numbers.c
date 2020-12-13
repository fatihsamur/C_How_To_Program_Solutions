#include<stdio.h>
#include<limits.h>

// ?????????????????



int main(int argc, char const *argv[])
{
    int number = 2;
    int factor = 1;
    int x;
    double e = 2;
    double epowerX = 2;
    while (number > 0 && number < 20)
    {
        factor = 1;
        x = number;
        while (x > 1)
        {
            factor = factor * x;
            x--;
        }
        e = e + (double) 1 / (double) factor;
        epowerX += (double) number * (double) number / (double) factor; 
        printf("%d! is: %d\n", number, factor);
        number++;
    }
    printf("e is: %lf\n", e);
    printf("epower X is: %lf\n", epowerX);

    return 0;
}