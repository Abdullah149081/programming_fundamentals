#include <stdio.h>

int main()
{

    // 3 * 4
    int a[3][4] = {{5, 6, 7, 8}, {15, 16, 17, 18}, {25, 26, 27, 28}};

    for (int i = 0; i < 3; i++)
    {
        printf("row %d: ", i);
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}