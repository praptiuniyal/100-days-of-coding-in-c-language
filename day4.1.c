// Q7: Swap without third variable
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    a = a + b; b = a - b; a = a - b;
    printf("Swapped: a=%d, b=%d\n", a, b);
    return 0;
}