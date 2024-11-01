#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i + 1; j > 0; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

/*
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
*/