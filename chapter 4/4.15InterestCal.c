#include<stdio.h>
#include<math.h>

// Modified compund interest program, exercises 4.15
int main(int argv, char const argc[])
{
    double principal = 1000;
    for (double rate = 0.05; rate <= 0.10; rate += 0.01)
    {
        printf("\n\nInterest Rate is: %.2f\n", rate);
        printf("%4s%25s\n","Year", "Amount on deposit");
        for (unsigned int year = 1; year <= 3; ++year)
        {
            double amount = principal * pow(1.0 + rate, year);
            printf("%4u%25.2f\n", year, amount);
        }
        
    }
    
    return 0;
}