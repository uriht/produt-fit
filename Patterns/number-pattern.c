#include <stdio.h>
/*
Print the pattern
        *
      * *
    * * *
  * * * *
* * * * *

 */
int main()
{
    int input; // 4
    scanf("%d", &input);
    int line;
    for (line = 1; line <= input; line++)
    {
        if (line % 2 != 0) // line is even
        {
            for (int i = 1; i <= input; i++)
            {
                printf("%d ", line);
            }
            printf("%d ", line + 1);
        }
        else // line is  odd
        {
            printf("%d ", line + 1);
            for (int i = 1; i <= input; i++)
            {
                printf("%d ", line);
            }
        }
        printf("\n");
    }
}