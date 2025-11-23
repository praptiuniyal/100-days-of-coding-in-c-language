// Q39: Product of odd digits
#include <stdio.h>
int main() {
    int n, prod = 1, digit, found = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        digit = n % 10;
        if (digit % 2 != 0) {
            prod *= digit;
            found = 1;
        }
        n /= 10;
    }
    if (found)
        printf("Product = %d\n", prod);
    else
        printf("No odd digits\n");
    return 0;
}