#include<stdio.h>
#include<math.h>

int main(int argv, char const argc[])
{
    int principal = 100000;
    int dollar, penny;
    int rate = 5;
    printf("%4s%25s\n","Year", "Amount on deposit");
    for (int i = 1; i <= 10; i++)
    {
        principal += principal * (1 + rate) / 100;
        dollar = principal / 100;
        penny = principal % 100;
        printf("%4d%19d$,%3dC\n", i, dollar, penny);
    }
    double principalD = 1000;
    double rateD = 0.05;
    printf("%4s%25s\n","Year", "Amount on deposit");

    for (unsigned int year = 1; year <= 10; ++year)
    {
        double amount = principalD * pow(1.0 + rateD, year);
        printf("%4u%25.2f\n", year, amount);
    }

    return 0;

}