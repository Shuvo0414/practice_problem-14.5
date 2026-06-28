#include <stdio.h>

void ShiftZeros(int n, int a[])
{
    int nonZero = 0;

    // Step 1: move all non-zero elements forward
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[nonZero] = a[i];
            nonZero++;
        }
    }

    // Step 2: fill remaining positions with 0
    for (int i = nonZero; i < n; i++)
    {
        a[i] = 0;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ShiftZeros(n, arr);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

/*
Given an array𝐴
of size𝑁
. Print the array elements after shifting all zeroes in array𝐴
to the right.

Note: Solve this problem using function.

Input
First line will contain a number𝑁
 ( 1 ≤ 𝑁≤10^3)
number of elements.

The second line will contain𝑁
numbers( 0 ≤𝐴𝑖≤10^3)
.

Output:
Print the array after shifting right all its zeros.

Examples:
Input:
4
2 0 0 5
Output:
2 5 0 0

Input:
5
1 5 0 7 4
Output:
1 5 7 4 0

*/