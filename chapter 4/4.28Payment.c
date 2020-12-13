#include<stdio.h>

// exercise 4.28

int main(int argv, char const argc[])
{
    printf("\n%-20s%-8s\n%-20s%-8s\n", "Position:", "Paycode:", "_________", "________");
    printf("%-20s:%-8d\n%-20s:%-8d\n%-20s:%-8d\n%-20s:%-8d\n", "Managers", 1, "Hourly Workers", 2, "Commission Workers", 3, "Pieceworkers", 4);
    int paycode = 1;
    double wage, hours, sales,  item, perItem;
    double payment1, payment2, payment3, payment4;
    while (paycode != -1)
    {
        printf("Select the worker's paycode (-1 to exit): ");
        scanf("%d", &paycode);
        if (paycode == -1)
        {
            break;
        }
        if (paycode < 1 || paycode > 4)
        {
            printf("Error! Invalid paycode!\n");
            continue;
        }
        switch (paycode)
        {
            case 1:
            printf("Enter weekly payment for managers: ");
            scanf("%d", &payment1);
            printf("Payment for manager: $%d\n", payment1);
            break;
            case 2:
            printf("Enter wage for an hour:");
            scanf("%lf", &wage);
            printf("Enter how many hours worked: ");
            scanf("%lf", &hours);
            if (hours <= 40)
            {
                payment2 = wage * hours;
            }
            else 
            {
                payment2 = wage * 40 + (hours - 40) * (wage * 1.5);
            }
            printf("Payment for the worker: $%.2f\n", payment2);
            break;
            case 3:
            printf("Enter weekly sales of worker: ");
            scanf("%lf", &sales);
            payment3 = 250 + sales * 5.7 / 100;
            printf("Payment for the worker: $%.2f\n", payment3);
            break;
            case 4: 
            printf("Enter items produced by worker: ");
            scanf("%lf", &item);
            printf("Enter wage per item: ");
            scanf("%lf", &perItem);
            payment4 = item * perItem;
            printf("Payment for worker: $%.2f\n", payment4);
            break;
            case '\n':
            case '\t':
            case ' ':
            break;
        }
    }


    return 0;

}