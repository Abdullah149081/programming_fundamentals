#include <stdio.h>
#include <string.h>

int f[1000] = {0};
int fre[1000] = {0};
int main()
{
    char str[100] = "apple";

    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        int index = str[i] - 'a';
        f[index] = 1;
        fre[index]++;
    }

    // count how many single latter
    for (int i = 0; i < 26; i++)
    {
        if (fre[i] > 0)
        {
            printf("%c : %d\n", i + 'a', fre[i]);
        }
    }

    printf("ch--fre--idx--ascii\n");

    for (int i = 0; i < 26; i++)
    {

        printf("%c--%d--%d--%d\n", i + 'a', f[i], i, i - 'a');
    }
}