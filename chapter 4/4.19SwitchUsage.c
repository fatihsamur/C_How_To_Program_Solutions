#include<stdio.h>

// break, continue, switch...case usage;

int main(int argv, char const argc[])
{
    printf("%15s%15s\n", "Product Number", "Retail Price");
    printf("%-15d %-15.2f\n%-15d %-15.2f\n%-15d %-15.2f\n%-15d %-15.2f\n%-15d %-15.2f\n", 1, 2.98, 2, 4.50, 3, 9.98, 4, 4.49, 5, 6.87);
    int product = 1;
    int quantity;
    double price;
    double total = 0;
    while (product != -1)
    {
        printf("Select a product from 1 to 5 (-1 to end): ");
        scanf("%d", &product);
        if (product == -1)
        {
            break;
        }
        if (product < 1 || product > 5)
        {
            printf("Invalid entry!\n");
            continue;
        }
        printf("How many product sold: ");
        scanf("%d", &quantity);
        switch (product)
        {
            case 1:
            price = 2.98;
            break;

            case 2:
            price = 4.50;
            break;

            case 3:
            price = 9.98;
            break;

            case 4:
            price = 4.49;
            break;

            case 5:
            price = 6.87;
            break;

            case '\n':
            case '\t':
            case ' ':
            break;

        }
        total += price * quantity;
        printf("%d x product %d:....%.2f\n", quantity, product, price * quantity); 
    }
    printf("Total amount: %.2f\n", total);
    
    
    return 0;

}