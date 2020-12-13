#include<stdio.h>
#include<math.h>

int main(int argv, char const argc[])
{
    int start, end;
    double fah, cel;
    printf("Enter two integer between \"-\" them to convert Celcius to Fahrenheit: ");
    scanf("%d-%d", &start, &end);
    printf("%-10s %10s\n", "Celcius", "Fahrenheit");
    for (cel = start; cel <= end; cel++)
    {
        fah = cel * 9 / 5 + 32;
        printf("%-10.2f %-10.2f\n", cel, fah);
    }
   
    return 0;

}