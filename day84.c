// Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include <stdio.h>

enum status { SUCCESS, FAILURE, TIMEOUT };

int main()
 {
    enum status s;

    for (s = SUCCESS; s <= TIMEOUT; s++)
     {
        switch (s)
         {
            case SUCCESS: printf("SUCCESS -> Operation completed successfully\n");
             break;
            case FAILURE: printf("FAILURE -> Operation failed\n");
             break;
            case TIMEOUT: printf("TIMEOUT -> Operation timed out");
             break;
        }
    }

    return 0;
}