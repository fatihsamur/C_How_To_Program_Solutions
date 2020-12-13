#include<stdio.h>

int main(int argv, char const argc[])
{
    long long int CurrentPopulation, population, annualGrowth;
    double GrowthRate;
    int doublingYear = 0;
    CurrentPopulation = 7773630500;
    GrowthRate = 0.0105;
    printf("Current world population: %lld\nYearly population growth rate: %c%.2f\n\n", CurrentPopulation,'%', GrowthRate * 100);
    printf("%-6s%-15s%-15s\n","Year", "Yearly Growth", "Population");
    population = CurrentPopulation;
    for (int year = 2020; year <= 2100; year++)
    {
        annualGrowth = population * GrowthRate;
        population += annualGrowth;
        printf("%-6d%-15lld%-15lld\n", year, annualGrowth, population); 
        if (population > 2 * CurrentPopulation && doublingYear == 0)
        {
            doublingYear = year;
        }
    }
    printf("\nIn year %d, world population will be double of current population.\n\n", doublingYear);
    
    return 0;

}