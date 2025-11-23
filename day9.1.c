// Q17: Roots of Quadratic Equation
#include <stdio.h>
int main() {
    int a, b, c, d;
    printf("Enter coefficients a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    d = b*b - 4*a*c;
    if (d > 0)
        printf("Real and Distinct Roots\n");
    else if (d == 0)
        printf("Real and Equal Roots\n");
    else
        printf("Imaginary Roots\n");
    return 0;
}