#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr = &n;
    scanf("%d", ptr);

    /*
      malloc -> Memory Allocation (n * sizeof (data_type))
      calloc -> contiguous allocation (n , sizeof (data_type))
    */

    // int *arr = (int *)malloc(n * sizeof(int));

    int *arr = (int *)calloc(n, sizeof(int));
    // calloc  always -> value 0

    if (arr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    /*
        for (int i = 0; i < n; i++)
       {
           scanf("%d", &arr[i]);
           scanf("%d", arr + i);
       }

       for (int i = 0; i < n; i++)
       {
           printf("%d ", arr[i]);
           printf("Value: %d\n", *(arr + i));
           printf("Address : %d\n", (arr + i));
       } */

    // Input n elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    arr = realloc(arr, (n + 5) * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed");
    }

    for (int i = n; i < n + 5; i++)
    {
        scanf("%d", arr + i);
    }

    for (int i = 0; i < n + 5; i++)
    {
        printf("%d ", *(arr + i));
    }

    free(arr); // always must free function call.

    printf("\n");

    int *a = arr + 3; // index 

    printf("%d %d", *a, *(arr + 3));

    return 0;
}
