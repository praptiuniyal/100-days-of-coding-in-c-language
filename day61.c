// Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

#include <stdio.h>

void firstneg(int arr[], int n, int k) {
    int i, start = 0, end = 0;
    int negatives[n], front = 0, rear = 0;

    while (end < n) 
    {
        if (arr[end] < 0) negatives[rear++] = end;
        if (end - start + 1 == k) {
            if (front < rear && negatives[front] >= start) 
                printf("%d ", arr[negatives[front]]);
            else 
                printf("0 ");
            start++;
        }
        end++;
    }
}

int main() 
{
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) 
    scanf("%d", &arr[i]);
    scanf("%d", &k);
    firstneg(arr, n, k);
    return 0;
}