#include<stdio.h>

// pythagorean triples finder, exercise 4.27;

int main(int argv, char const argc[])
{
    int counter = 0; // to eliminating repeating triples
    int i = 1;       // just for counting triples 
    int N;
    printf("Enter max value for hyphothenus: ");
    scanf("%d", &N);
    int side1, side2, hypothenus;
    printf("%-6s%6s%6s%6s\n","#", "side1", "side2", "hptns");
    for (hypothenus = 1; hypothenus < N; hypothenus++)
    {
        for (side1 = 1; side1 < hypothenus; side1++)
        {
            for (side2 = 1; side2 < hypothenus; side2++)
            {
                if (hypothenus * hypothenus == side1 * side1 + side2 * side2)
                {
                    counter++;
                    // every repetitive triples come one after another, so we choose the odd ones! 
                    if (counter % 2 == 1)
                    {
                        printf("%-6d%6d%6d%6d\n",i++, side1, side2, hypothenus);
                    }
                }
            }
        }
    }

    return 0;

}