// Create an enum for months and print how many days each month has.

#include <stdio.h>

enum months {January, February, March, April, May, June, July, August, September, October, November, December};

int main() {
    enum months month;
    int days[] = {31, 28, 31, 30, 31, 30,
                  31, 31, 30, 31, 30, 31};
    const char *names[] = {"January", "February", "March", "April", "May", "June",
                           "July", "August", "September", "October", "November", "December"};

    for (month = January; month <= December; month++)
     {
        printf("%s -> %d days\n", names[month],days[month]);
    }

    return 0;
}