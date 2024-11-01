#include <stdio.h>

int main()
{
    int a, b, c;
    char e, f;

    scanf("%d ", &a);
    scanf("%c ", &e);
    scanf("%d ", &b);
    scanf("%c ", &f);
    scanf("%d", &c);

    if (e == '+')
    {
        if (a + b == c)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", a + b);
        }
    }
    else if (e == '-')
    {
        if (a - b == c)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", a - b);
        }
    }
    else
    {
        if (a * b == c)
        {
            printf("Yes");
        }
        else
        {
            printf("%d", a * b);
        }
    }

    return 0;
}