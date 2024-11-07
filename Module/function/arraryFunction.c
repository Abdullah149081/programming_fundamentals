#include <stdio.h>

void fun(int x[], int n, char c[])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += x[i];
    }
    printf("%d\n", sum);
    printf("%s", c);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[10] = "Abdullah";

    fun(arr, 5, ch);
}