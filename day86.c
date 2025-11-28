// Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include <stdio.h>

enum menu {ADD = 1,SUBTRACT,MULTIPLY };

int main()
 {
    int a = 10, b = 5;
    enum menu choice;

    for (choice = ADD; choice <= MULTIPLY; choice++) 
    {
        switch (choice) 
        {
            case ADD:
                printf("ADD -> %d + %d = %d\n", a, b, a + b);
                break;
            case SUBTRACT:
                printf("SUBTRACT -> %d - %d = %d\n", a, b, a - b);
                break;
            case MULTIPLY:
                printf("MULTIPLY -> %d * %d = %d\n", a, b, a * b);
                break;
        }
    }

    return 0;
}