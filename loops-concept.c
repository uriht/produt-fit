#include <stdio.h>
#include <stdlib.h>
int main()
{
    // int n;
    // scanf("%d", &n);
    int ch = 'A';
    while (ch <= 'Z')
    {
        printf("%c", ch);
        ch++;
    }
    printf("\n");
    int num = 1;
    while (num <= 26)
    {
        printf("%d", num % 10);
        num++;
    }
    printf("\n");
    num = 1;
    while (num <= 26)
    {
        num / 10;
        printf("%d", num / 10);
        num++;
    }

    return EXIT_SUCCESS;
}

// ABCDEFGHIJKLMNOPQRSTUVWXYZ
// 12345678901234567890123456
// 00000000011111111112222222