#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c)
    {
        // a is min

        if (b <= c)
        {
            // c  is max
            printf("%d\n%d\n%d", a, b, c);
        }
        else
        {
            // b is max
            printf("%d\n%d\n%d", a, c, b);
        }
    }
    else if (b <= a && b <= c)
    {
        // b is min
        if (a <= c)
        {
            // c is max
            printf("%d\n%d\n%d", b, a, c);
        }
        else
        {
            // a is max
            printf("%d\n%d\n%d", b, c, a);
        }
    }
    else
    {
        // c is min

        if (a <= b)
        {
            printf("%d\n%d\n%d", c, a, b);
        }
        else
        {
            printf("%d\n%d\n%d", c, b, a);
        }
    }

    printf("\n");

    printf("\n%d\n%d\n%d", a, b, c);

    return 0;
}