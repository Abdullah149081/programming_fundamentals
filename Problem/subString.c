#include <stdio.h>
#include <string.h>

int main()
{
    char s[10001];
    scanf("%s", s);

    int i, j = 0;
    int len = strlen(s);

    for (i = 0; i < len && j < 5; i++)
    {

        if (s[i] == "hello"[j])
        {
            j++;
        }
    }

    if (j == 5)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}