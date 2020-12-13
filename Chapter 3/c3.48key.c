#include<stdio.h>

int main(int argv, char const argc[])
{
    int number, d1, d2, d3, d4, temp;
    printf("Enter 4 digit password: ");
    scanf("%d", &number);
    d4 = number % 10;
    number /= 10;
    d3 = number % 10;
    number /= 10;
    d2 = number % 10;
    number /= 10;
    d1 = number % 10;
    printf("code is: %d%d%d%d\n", d1, d2, d3, d4);
    
    d1 += 7;
    d1 %= 10;
    d2 += 7;
    d2 %= 10;
    d3 += 7;
    d3 %= 10;
    d4 += 7;
    d4 %= 10;
    temp = d1;
    d1 = d3;
    d3 = temp;
    temp = d2;
    d2 = d4;
    d4 = temp;
    printf("encrypted code is: %d%d%d%d\n", d1, d2, d3, d4);
    temp = d1;
    d1 = d3;
    d3 = temp;
    temp = d2;
    d2 = d4;
    d4 = temp;
    d1 += 3;
    d2 += 3;
    d3 += 3;
    d4 += 3;
    d1 %= 10;
    d2 %= 10;
    d3 %= 10;
    d4 %= 10;
    printf("decrypted code is: %d%d%d%d\n", d1, d2, d3, d4);

}