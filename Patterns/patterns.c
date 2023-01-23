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
    int line = 1;
    int space_ctr = 0;
    int star_ctr = 1;
    for (line = 1; line <= input; line++)
    {
        for (space_ctr = line; space_ctr < input; space_ctr++)
        {
            printf(" ");
        }
        for (star_ctr = 1; star_ctr <= 2 * line - 1; star_ctr += 1)
        {
            printf("*  ");
        }

        printf("\n");
    }
    return 0;
}
