// Q40: 1's complement of binary
#include <stdio.h>
int main() {
    int n, bin[32], i = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) {
        bin[i++] = n % 2;
        n /= 2;
    }
    printf("1's Complement = ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", bin[j] == 0 ? 1 : 0);
    printf("\n");
    return 0;
}