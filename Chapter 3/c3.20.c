#include<stdio.h>
#include<limits.h>

int main(int argc, char const *argv[])
{
    int hours;
    float rate, salary;
    printf("Enter # of hours worked (-1 to end): ");
    scanf("%d", &hours);
    while (hours != -1)
    {
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &rate);
        if (hours > 40)
        {
            salary = rate * (3 * hours - 40) / 2;
        }
        else
        {
            salary = hours * rate;
        }
        printf("Salary is: %.2f\n", salary);
        printf("\nEnter # of hours worked (-1 to end): ");
        scanf("%d", &hours);

    }
    

    return 0;
}