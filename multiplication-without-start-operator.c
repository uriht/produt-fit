#include <stdio.h>
#include <stdlib.h>
// Question
int main()
{
    int num1, num2;
    printf("Enter First Number ");
    scanf("%d", &num1);
    printf("Enter Second Number ");
    scanf("%d", &num2);
    int itr = num2;
    while (itr)
    {
        num1 += num1;
        itr--;
    }
    printf("The Output is %d", num1);
    return EXIT_SUCCESS;
}