#include <stdio.h>

int main()
{
    int a = 5;
    int *ptr = &a;

    printf("Value is a : %d\n", a);
    printf("Address is a : %u\n", &a);
    printf("Address of ptr : %d\n", ptr);
    printf("Content of ptr: %d\n", *ptr);
    printf("Address of ptr: %u\n", &ptr);

    return 0;
}
