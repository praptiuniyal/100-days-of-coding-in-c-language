// Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>

int kadane(int arr[], int n) 
{
    int maxsofar = arr[0], curr_max = arr[0];
    for (int i = 1; i < n; i++) {
        if (curr_max + arr[i] > arr[i])
            curr_max = curr_max + arr[i];
        else
            curr_max = arr[i];
        if (curr_max > maxsofar)
            maxsofar = curr_max;
    }
    return maxsofar;
}

int main() 
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("%d", kadane(arr, n));
    return 0;
}