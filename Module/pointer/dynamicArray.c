#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *arr = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }
    printf("malloc -> ");
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    int *temp = arr;

    arr = (int *)realloc(arr, 10 * sizeof(int));

    if (arr == NULL)
    {
        arr = temp;
    }

    for (int i = 5; i < 10; i++)
    {
        arr[i] = i + 1;
    }

    printf("realloc -> ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
