#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 5;

    int *x = &a;

    int **y = &x;

    printf("%d %d\n", **y, *x);

    /*
     *y == Address

     &a == Address

     **y == Value
     */

    return 0;
}
