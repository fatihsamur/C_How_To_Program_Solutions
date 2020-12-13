#include<stdio.h>

int main(int argv, char const argc[])
{
    int consumption, total = 0;
    double tax;
    printf("Enter housing consumption: ");
    scanf("%d", &consumption);
    total += consumption;
    printf("Enter food consumption: ");
    scanf("%d", &consumption);
    total += consumption;
    printf("Enter clothing consumption: ");
    scanf("%d", &consumption);
    total += consumption;
    printf("Enter transportation consumption: ");
    scanf("%d", &consumption);
    total += consumption;
    printf("Enter education consumption: ");
    scanf("%d", &consumption);
    total += consumption;
    printf("Enter health care consumption: ");
    scanf("%d", &consumption);
    total += consumption;
    printf("Enter vacation consumption: ");
    scanf("%d", &consumption);
    total += consumption;
    tax = 0.23 * total;
    printf("Total consumption is: %d, tax to pay: %.2f\n", total, tax);
	
	return 0;
}