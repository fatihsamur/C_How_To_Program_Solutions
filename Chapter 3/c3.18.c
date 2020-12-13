#include<stdio.h>
#include<limits.h>

int main(int argc, char const *argv[])
{
    float sales;
    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f", &sales);
    while (sales != -1)
    {
        float comission = (9 * sales) / 100;
        printf("salary is: %.2f", comission + 200);
        puts("");
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &sales);
    }
    

    return 0;
}