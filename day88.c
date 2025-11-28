// Print all enum names and integer values using a loop.

#include <stdio.h>

enum days {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

int main()
 {
    enum days d;
    const char *names[] = {"SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
                           "THURSDAY", "FRIDAY", "SATURDAY"};

    for (d = SUNDAY; d <= SATURDAY; d++)
     {
        printf("%s -> %d\n", names[d], d);
    }

    return 0;
}