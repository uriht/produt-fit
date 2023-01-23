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
    int space1_ctr;
    int star_ctr = 1;
    int space2_ctr;
    for (line = input; line >= 1; line--)
    {
        for (space1_ctr = line; space1_ctr < input; space1_ctr++)
        {
            printf(" ");
        }
        for (star_ctr = 1; star_ctr <= 2 * line - 1; star_ctr += 1)
        {
            printf("*");
        }
        for (space2_ctr = line; space2_ctr < input; space2_ctr++)
        {
            printf(" ");
        }
        for (space1_ctr = line; space1_ctr < input; space1_ctr++)
        {
            printf(" ");
        }
        for (star_ctr = 1; star_ctr <= 2 * line - 1; star_ctr += 1)
        {
            printf("*");
        }

        printf("\n");
    }
    for (line = 1; line <= input; line++)
    {
        for (space1_ctr = line; space1_ctr < input; space1_ctr++)
        {
            printf(" ");
        }
        for (star_ctr = 1; star_ctr <= 2 * line - 1; star_ctr += 1)
        {
            printf("*");
        }
        for (space2_ctr = line; space2_ctr < input; space2_ctr++)
        {
            printf(" ");
        }
        for (space1_ctr = line; space1_ctr < input; space1_ctr++)
        {
            printf(" ");
        }
        for (star_ctr = 1; star_ctr <= 2 * line - 1; star_ctr += 1)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
