// find the second largest element

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // finding the largest
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];

    // finding the largest among elements not equal to max
    int second = -1;
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != max) {
            if (!found || arr[i] > second) {
                second = arr[i];
                found = 1;
            }
        }
    }

    if (found)
        printf("Second largest = %d\n", second);
    else
        printf("No second largest\n");

    return 0;
}