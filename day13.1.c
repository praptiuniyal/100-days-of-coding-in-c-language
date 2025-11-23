 // Q25: Basic Calculator using switch-case
#include <stdio.h>
int main() {
    int a, b;
    char op;
    printf("Enter expression (e.g. 4 + 5): ");
    scanf("%d %c %d", &a, &op, &b);

    switch(op) {
        case '+': printf("Result = %d\n", a + b); break;
        case '-': printf("Result = %d\n", a - b); break;
        case '*': printf("Result = %d\n", a * b); break;
        case '/':
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Error: Division by zero\n");
            break;
        case '%':
            if (b != 0)
                printf("Result = %d\n", a % b);
            else
                printf("Error: Modulo by zero\n");
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}