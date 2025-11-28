// Show that enums store integers by printing assigned values.

#include <stdio.h>
enum status { SUCCESS = 10, FAILURE = 20, TIMEOUT = 30 };

int main() {
    enum status s;

    for (s =SUCCESS; s<= TIMEOUT; s=s+ 10)
     {
        switch (s) {
            case SUCCESS: printf("SUCCESS -> %d\n", s); break;
            case FAILURE: printf("FAILURE -> %d\n", s); break;
            case TIMEOUT: printf("TIMEOUT -> %d\n", s); break;
        }
    }

    return 0;
}