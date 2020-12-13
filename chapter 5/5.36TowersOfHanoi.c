#include<stdio.h>

void movements(int disks, int pegS, int pegF, int pegT);

int main(void)
{
    int disks, peg1 = 1, peg2 = 2, peg3 = 3;
    printf("Enter disk number: ");
    scanf("%d", &disks);
    movements(disks, peg1, peg2, peg3);

    return 0;
}

void movements(int disks, int peg1, int peg2, int peg3)
{
    if (disks == 1)
    {
        printf("%d --> %d\n", peg1, peg3);
    }
    else if (disks == 2)
    {
        printf("%d --> %d\n", peg1, peg2);
        printf("%d --> %d\n", peg1, peg3);
        printf("%d --> %d\n", peg2, peg3);
    }
    else
    {
        movements(disks - 1, peg1, peg3, peg2);
        printf("%d --> %d\n", peg1, peg3);
        movements(disks - 1, peg2, peg1, peg3);
    }
}