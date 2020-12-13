#include<stdio.h>

int main(int argc, char const *argv[])
{
    int monthB, dayB, yearB, monthC, dayC, yearC, ageOfPerson, maxHR;
    printf("Enter birthday as mm/dd/yy: ");
    scanf("%d/%d/%d", &monthB, &dayB, &yearB);
    printf("Enter current day: ");
    scanf("%d/%d/%d", &monthC, &dayC, &yearC);
    ageOfPerson = yearC - yearB;
    printf("Age of person is: %d\n",ageOfPerson);
    maxHR = 220 - ageOfPerson;
    printf("Max hearth rate of person is: %d\n", maxHR);
    printf("Target hearth rate is between %d and %d\n", (maxHR * 50) / 100, (maxHR * 85) / 100);


    return 0;
}

/* 
    Program calculate age of person as years, then calculate max hearth rate and target hearth rate according to the formulas
*/