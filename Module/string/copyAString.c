#include <stdio.h>
#include <string.h>

int main()
{
    char a[10];
    char b[10] = "Abdullah";

    // string copy
    strcpy(a, b);

    printf("a: %s b: %s", a, b);

    return 0;
}