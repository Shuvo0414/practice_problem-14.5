#include <stdio.h>

#include <stdio.h>
// (duplicate include, not needed but harmless)

int main()
{
    int A, B, C;
    char S;

    /*
    Input format:
    A S B = C

    Example:
    5 + 10 = 15

    We read:
    A → first number
    S → operator (+, -, *)
    B → second number
    '=' → ignored using %*c
    C → expected result
    */

    scanf("%d %c %d %*c %d", &A, &S, &B, &C);

    int result;

    /*
    Based on operator S, we calculate correct result
    */

    if (S == '+')
    {
        // addition operation
        result = A + B;
    }
    else if (S == '-')
    {
        // subtraction operation
        result = A - B;
    }
    else if (S == '*')
    {
        // multiplication operation
        result = A * B;
    }

    /*
    Now we compare computed result with given C
    */

    if (result == C)
    {
        // if correct → print Yes
        printf("Yes");
    }
    else
    {
        /*
        if wrong → print correct answer instead
        (as required by problem statement)
        */
        printf("%d", result);
    }

    return 0;
}

/*
Given a mathematical expression. The expression will be one of the following expressions:

A + B = C, A - B = C and A * B = C

where A, B, C are three numbers, S is the sign between A and B, and Q the '=' sign

Print "Yes" If the expression is Right , Otherwise print the right answer of the expression.

Input:
Only one line containing the expression: A, S, B, Q, C respectively (0 ≤ A, B ≤ 100,  - 10^5 ≤ C ≤ 10^5) and S can be ('+', '-', '*') without the quotation.

Output:
Output either "Yes" (without the quotation) or the right answer depending on the statement.

Examples:
Input:
5 + 10 = 15
Output:
Yes

Input:
3 - 1 = 2
Output:
Yes

Input:
2 * 10 = 19
Output:
20

*/