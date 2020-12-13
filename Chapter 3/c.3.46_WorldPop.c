#include<stdio.h>
#include<limits.h>

// integer overflow with current world popuplation ?? 

int main(int argc, char const *argv[])
{
    int annualGrowth, currentPop, years;;
    float growthRate;
    printf("enter current world population: ");
    scanf("%d", &currentPop);
    printf("enter annual growth rate: ");
    scanf("%f", &growthRate);
    annualGrowth = currentPop * growthRate / 100;
    printf("enter years: ");
    scanf("%d", &years);
    for (int i = 0; i < years; i++)
    {
        currentPop += annualGrowth;
    }
    printf("population after %d years is: %d\n", years, currentPop);
   
    return 0;
}