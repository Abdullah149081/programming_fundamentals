#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);

    int a[row + 5][col + 5];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    a[2][2] = 10;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}