// Q9: Simple and Compound Interest 
#include <stdio.h>
int main() {
    int p, r, t, si;
    float amount = 1.0, ci;

    printf("Enter Principal, Rate, Time : ");
    scanf("%d %d %d", &p, &r, &t);

    si = (p * r * t) / 100;

    for (int i = 0; i < t; i++) {
        amount = amount * (1 + r / 100.0);
    }
    ci = p * amount - p;

    printf("Simple Interest = %d\nCompound Interest = %.2f\n", si, ci);
    return 0;
}