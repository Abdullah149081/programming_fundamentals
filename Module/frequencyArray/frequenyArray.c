#include <stdio.h>

int f[10000] = {0};
int main()
{
    int n;
    scanf("%d", &n);

    int a[n + 5];

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        f[a[i]] = 1;
    }
    for (int i = 0; i < n; i++)
    {

        printf("index -> %d Array -> %d\n", i, f[i]);
    }

    printf("\n");

    int m;
    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        int x;
        scanf("%d", &x);

        printf("%d -> ", x);

        if (f[x] == 1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}