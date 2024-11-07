#include <stdio.h>

void printDigits(int p)
{
    if (p == 0)
    {
        return;
    }
    int digit = p % 10;

    printDigits(p / 10);

    printf("%d ", digit);
}

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

        printDigits(n);

        printf("\n");
    }

    return 0;
}