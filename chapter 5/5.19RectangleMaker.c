#include<stdio.h>

void Drawer(int , int);

int main(int argv, char const argc[])
{   
    int height, width;
    printf("Enter height and width: ");
    scanf("%d%d", &height, &width);
    Drawer(height, width);
    
    return 0;
}

void Drawer(int height, int width)
{
    int i, j;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            printf("#");
        }
        puts("");
    }
}