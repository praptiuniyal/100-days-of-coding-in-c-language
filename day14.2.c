// Q28: Product of even numbers from 1 to n
#include <stdio.h>
int main() {
    int n, prod = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2)
        prod *= i;
    printf("Product = %d\n", prod);
    return 0;
}