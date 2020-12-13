#include<stdio.h>

void Drawer(int , int, char);

int main(int argv, char const argc[])
{   
    int height, width;
    char fill;
    printf("Enter height, width and fill caharacter: ");
    scanf("%d%d %c", &height, &width, &fill);
    Drawer(height, width, fill);
    
    return 0;
}

void Drawer(int height, int width, char c)
{
    int i, j;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            printf("%c", c);
        }
        puts("");
    }
}