#include <stdio.h>

int main()
{

    int a, b;
    char c;
    scanf("%d ", &a);
    scanf("%c ", &c);
    scanf("%d", &b);

    if (c == '>')
    {
        if (a > b)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }

    else if (c == '<')
    {
        if (a < b)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }
    else
    {
        if (a == b)
        {
            printf("Right");
        }
        else
        {
            printf("Wrong");
        }
    }
}