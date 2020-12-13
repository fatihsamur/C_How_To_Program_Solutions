#include<stdio.h>

void movements(int, int, int, int);

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
    if (disks > 0)
    {
        movements(disks - 1, peg1, peg3, peg2);
        printf("%d --> %d\n", peg1, peg3);
        movements(disks - 1, peg2, peg1, peg3);
    }
}