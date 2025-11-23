// Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main() {
    int r;
    float pi=3.14;
    printf("enetr radius\n");
     scanf("%d",&r);
    printf("the area of circle is:%0.2f\n",pi*r*r);
    printf("the circumference of circle is:%0.2f\n",2*pi*r);
    return 0;
}