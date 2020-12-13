#include<stdio.h>
#include<math.h>

// pi calculator, exercise 4.26

int main(int argv, char const argc[])
{
    int Number;
    printf("Enter  max value of your interval: ");
    scanf("%d", &Number);
    int counter = 0;
    double pi = 0;
    double k = 4;
    double i = 1;
    while (counter < Number)
    {
        pi += (k / i);
        k *= -1;
        i += 2;
        counter++;
        printf("%6d %8f\n", counter, pi);
    }
    
    return 0;

}