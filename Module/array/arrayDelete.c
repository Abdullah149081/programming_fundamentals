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

    printf("\n");

    int index;
    scanf("%d", &index);

    if (index < 0 || index >= length)
    {
        printf("Wrong index\n");
        return 0;
    }

    for (int i = index; i < length - 1; i++)
    {
        a[i] = a[i + 1];
    }

    length--; // element remove

    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}