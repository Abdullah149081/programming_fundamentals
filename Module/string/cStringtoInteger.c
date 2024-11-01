#include <stdio.h>

int main()
{
    char str[20];

    int length;
    scanf("%d", &length);

    scanf("%s", str);

    int num = 0;

    for (int i = 0; i < length; i++)
    {
        int digit = str[i] - '0';

        num = num * 10 + digit;
    }

    printf("%d", num);

    return 0;
}