#include <stdio.h>
#include <stdlib.h>
// 0 1 1 2 3 5 8
int main()
{
    int n = 0;
    scanf("%d", &n);
    int num1 = -1; // important
    int num2 = 1;

    int num3;

    while (n)
    {

        num3 = num1 + num2;
        printf(" %d", num3);
        num1 = num2;
        num2 = num3;
        n--;
    }

    return EXIT_SUCCESS;
}