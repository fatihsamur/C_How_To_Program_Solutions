#include<stdio.h>
#include<math.h>

double calculateCharges(int);

int main(int argv, char const argc[])
{
    int car1, car2, car3;
    printf("Enter hours used by 3 customer respecitvely: ");
    scanf("%d%d%d", &car1, &car2, &car3);
    printf("%-10s%-10s%-10s\n", "Car", "Hours", "Charge");
    printf("%-10d%-10d%-10.2f\n", 1, car1, calculateCharges(car1));
    printf("%-10d%-10d%-10.2f\n", 1, car2, calculateCharges(car2));
    printf("%-10d%-10d%-10.2f\n", 1, car3, calculateCharges(car3));
    printf("%-10s%-10d%-10.2f\n", "TOTAL", car1 + car2 + car3, calculateCharges(car1) + calculateCharges(car2) + calculateCharges(car3));

    return 0;
}

double calculateCharges(int hours)
{
    double fee;
    if (hours < 8)
    {
        fee = 25 + hours * 0.5;
    }
    else if (hours >= 8 && hours <= 24)
    {
        fee = 25 + (hours - 7) * 5 + hours * 0.5;
        if (fee >= 50)
        {
            fee = 50 + hours * 0.5;
        }
    }
    else if (hours > 24)
    {
        fee = 50 + 24 * 0.5 + calculateCharges(hours - 24); 
    }
    return fee;
}
