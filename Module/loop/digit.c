#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        if (n == 0)
        {
            printf("0");
        }
        while (n > 0)

        {
            int digit = n % 10; // last digit find
            printf("%d ", digit);
            n /= 10; // first digit find
        }

        printf("\n");
    }

    return 0;
}