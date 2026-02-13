#include <stdio.h>

int main()
{
    int m;
    // Pattern For Increasing Number Triangle
    printf("Enter the Num Of Elements:");
    scanf("%d", &m);
    if (m <= 0)
    {
        printf("Enetr  Number Greater Than 0...");
        return 0;
    }

    for (int i = 1; i <=m ; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}