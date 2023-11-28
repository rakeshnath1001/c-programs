/* 21.Calculate the average of the numbers between 1 and 20. */

#include <stdio.h>
int main()
{
    float sum = 0, avg, i;
    for (i = 1; i <= 20; i++)
    {
        sum += i;
    }
    avg = sum / 20;
    printf("The average of the numbers betweeen 1 and 20 is %.2f", avg);
    return 0;
}
