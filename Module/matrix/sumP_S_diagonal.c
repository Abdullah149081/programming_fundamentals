#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);

    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int diagonal = 0;
    int s_diagonal = 0;

    for (int i = 0; i < n; i++)
    {
        diagonal += a[i][i];
        s_diagonal += a[i][n - i - 1];
    }

    printf("%d", abs(diagonal - s_diagonal));

    return 0;
}
