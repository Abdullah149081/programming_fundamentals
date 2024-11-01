#include <stdio.h>
#include <limits.h>

int main()
{

    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int min = INT_MAX, max = INT_MIN;
    int min_pos = 0, max_pox = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            min_pos = i;
        }
        if (a[i] > max)
        {
            max = a[i];  // element
            max_pox = i; // index
        }
    }

    int temp = a[min_pos];
    a[min_pos] = a[max_pox];
    a[max_pox] = temp;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
