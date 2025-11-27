// A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include <stdio.h>
int main()
 {
    FILE *f = fopen("numbers.txt", "r");
    if (f == NULL)
     {
        printf("Error opening file\n");
        return 1;
    }

    int num,sum = 0,count = 0;
    while (fscanf(f, "%d", &num) == 1) 
    {
        sum += num;
        count++;
    }

    fclose(f);

    if (count> 0)
     {
        double avg = (double)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", avg);
    }
     else {
        printf("No integers found in file");
    }

    return 0;
}