#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int s = n - 1;
    int k = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        k += 2;
        s--;

        printf("\n");
    }

    s = 0;
    k = 2 * n - 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        k -= 2;
        s++;

        printf("\n");
    }

    return 0;
}

/*

Given a number N. Print a diamond that has 2N rows.

For more clarification see the example below.

Input:
Only one line containing number N (1 ≤ N ≤ 99).

Output:
Print the answer according to the required above.

Example:
Input:
4
Output:
   *
  ***
 *****
*******
*******
 *****
  ***
   *
Note:
Don't print any extra spaces after symbol " * ".

*/