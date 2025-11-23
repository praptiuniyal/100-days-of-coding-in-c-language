// Q6: Swap using third variable
#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a; a = b; b = temp;
    printf("Swapped: a=%d, b=%d\n", a, b);
    return 0;
}