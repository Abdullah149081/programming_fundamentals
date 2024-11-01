#include <stdio.h>

int a[10000];
int main()
{
    int length;
    scanf("%d", &length);

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }

    int index, value;
    scanf("%d %d", &index, &value);

    length++; // input length 4 it increases right length 5

    for (int i = length - 1; i >= index; i--)
    {
        a[i + 1] = a[i];
    }

    a[index] = value;

    printf("\n");

    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}