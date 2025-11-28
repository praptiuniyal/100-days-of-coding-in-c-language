// Define a struct with enum Gender and print person's gender.

#include <stdio.h>

enum gender {male, female, other};

struct Person {
    char name[20];
    enum gender gender;
};

int main() {
    struct Person p1 = {"Alex",male};
    struct Person p2 = {"Priya",female};
    struct Person p3 = {"Sam",other};

    struct Person people[] = {p1, p2, p3};
    const char *genderNames[] = {"male","female","other"};

    for (int i = 0; i < 3; i++)
     {
        printf("Name: %s, Gender: %s\n", people[i].name, genderNames[people[i].gender]);
    }

    return 0;
}