// Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

enum role { ADMIN, USER, GUEST };

int main()
 {
    enum role r;

    for (r =ADMIN; r<= GUEST;r++) 
    {
        switch (r)
         {
            case ADMIN:
                printf("ADMIN -> Full access granted\n");
                break;
            case USER:
                printf("USER -> Limited access granted\n");
                break;
            case GUEST:
                printf("GUEST -> Read-only access granted\n");
                break;
        }
    }

    return 0;
}