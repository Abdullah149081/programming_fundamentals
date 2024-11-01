#include <stdio.h>

int main()
{
    char str[20];

    // input str
    fgets(str, sizeof(str), stdin);

    // printf("%s", str);
    
    // output str
    fputs(str, stdout);

    return 0;
}