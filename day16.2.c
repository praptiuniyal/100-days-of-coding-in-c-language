// Q32: Palindrome check
#include <stdio.h>
int main() {
    int n, rev = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if (temp == rev)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}