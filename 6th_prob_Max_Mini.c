#include <stdio.h>

void Max_Min(int n, int arr[], int *max, int *mini)
{
    // initialize both max and min with first element of array
    // *max and *mini means we are changing values in main function
    *max = arr[0];
    *mini = arr[0];

    // loop through all elements of the array
    for (int i = 0; i < n; i++)
    {
        // if current element is greater than current max
        if (arr[i] > *max)
        {
            // update max value (directly in main using pointer)
            *max = arr[i];
        }

        // if current element is smaller than current min
        if (arr[i] < *mini)
        {
            // update min value (directly in main using pointer)
            *mini = arr[i];
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    // input array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // declare variables to store result
    int max, mini;

    // send addresses of max and mini so function can modify them
    Max_Min(n, arr, &max, &mini);

    // print minimum first and maximum second
    printf("%d %d", mini, max);

    return 0;
}

/*
Given an array A of size N. Print the minimum and the maximum number in the array.

Note: Solve this problem using function.

Input:
First line will contain a number N (1 ≤ N ≤ 10^3) number of elements.

Second line will contain N numbers (0 ≤ Xi ≤ 10^5).

Output:
Print the minimum and the maximum number separated by a space.

Example:

Input:

5
10 13 95 1 3

Output:
1 95
*/