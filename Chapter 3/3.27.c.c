#include<stdio.h>
#include<limits.h>

int main(int argc, char const *argv[])
{
    unsigned int passes = 0;
    unsigned int failes = 0;    
    int result;
    int valid = 0;
    for (int i = 1; i <= 10; i++)
    {
        printf("Enter result for student %i (1 for passes, 2 for failes): ", i);
        scanf("%d", &result);
        if (result == 1 || result == 2)
        {
            valid = 1;
        }
        else 
        {
            valid = 0;
        } 
        while (valid == 0)
        {
            printf("Enter result for student %i (1 for passes, 2 for failes): ", i);
            scanf("%d", &result);
            if (result == 1 || result == 2)
            {
                valid = 1;
            } 
        }
        if (valid == 1)
        {
            if (result == 1)
            {
                passes++;
            }
            else
            {
                failes++;
            }
        }
    }
    printf("passes: %d, failes: %d", passes, failes);
        
    return 0;
}