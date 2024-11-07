#include <stdio.h>

void printOneToN(int x, int n)
{
    // base case
    if (x > n)
    {
        return;
    }
    printf("%d ", x);
    printOneToN(x + 1, n);
}

int main()
{
    printOneToN(1, 5);

    return 0;
}