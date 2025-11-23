// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main() {
    int l,b;
    printf("enetr length\n");
     scanf("%d",&l);
    printf("enetr bredth\n");
    scanf("%d",&b);
    printf("the area of rectangle is:%d\n",l*b);
    printf("the perimeter of rectangle is:%d\n",2*l+2*b);
    
    
    return 0;
}