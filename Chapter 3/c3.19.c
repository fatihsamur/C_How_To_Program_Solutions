#include<stdio.h>
#include<limits.h>

int main(int argc, char const *argv[])
{
    float principal, rate;
    float term;
    printf("Enter loan principal (-1 to end): ");
    scanf("%f", &principal);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter term of the loans in day: ");
    scanf("%f", &term);
    while (principal != -1)
    {
        float interest = principal * rate * term / 365; 
        printf("The interest change is: $%.2f\n", interest);
        printf("\nEnter loan principal (-1 to end): ");
        scanf("%f", &principal);
        if (principal != -1)
        {
            printf("Enter interest rate: ");
            scanf("%f", &rate);
            printf("Enter term: ");
            scanf("%f", &term);
        }
    }
    

    return 0;
}