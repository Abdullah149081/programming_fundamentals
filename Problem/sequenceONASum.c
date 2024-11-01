#include <stdio.h>

int main()
{
    for (int i = 0; i <= 100; i++)
    {
        int n, m;
        scanf("%d %d\n", &n, &m);

        if (n > m)
        {
            int temp = n;
            n = m;
            m = temp;
        }
        
        if (n == 0 || m == 0 || n <= 0 || m <= 0)
        {
            break;
        }

        int sum = 0;

        for (int j = n; j <= m; j++)
        {
            printf("%d ", j);
            sum += j;
        }
        printf("sum =%d\n", sum);
    }

        return 0;
}
