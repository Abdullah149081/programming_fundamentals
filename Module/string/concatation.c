#include <stdio.h>
#include <string.h>

int main()
{
    char a[20] = "Abdullah ";
    char b[20] = "Al ";
    char c[20] = "Masud";

    strcat(a, b);
    strcat(a, c);

    printf("%s", a);

    return 0;
}