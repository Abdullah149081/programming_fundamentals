#include <stdio.h>

int main()
{
    int a = 1, b = 2;

    int *x = &a, *y = &b;

    int temp = *x;
    *x = *y;
    *y = temp;

    printf("%d %d", *x, *y);

    return 0;
}