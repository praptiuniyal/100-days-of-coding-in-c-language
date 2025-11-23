// Q31: Binary representation
#include <stdio.h>
int main() {
    int n, bin[32], i = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) {
        bin[i++] = n % 2;
        n /= 2;
    }
    printf("Binary = ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", bin[j]);
    printf("\n");
    return 0;
}