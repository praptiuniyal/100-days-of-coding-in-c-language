// Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>

enum trafficlight {RED,YELLOW,GREEN };

int main() {
    enum trafficlight signal;

    for (signal = RED; signal <= GREEN; signal++)
     {
        switch (signal) {
            case RED:    printf("RED -> Stop\n");
             break;
            case YELLOW: printf("YELLOW -> Wait\n");
             break;
            case GREEN:  printf("GREEN -> Go");
             break;
        }
    }

    return 0;
}