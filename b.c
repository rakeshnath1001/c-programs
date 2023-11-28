/*  19.Enter marks of three subjects of a student. Calculate the percentage and
    display his result. Percentage >=60 is equal to first division and percenatage
    >= 45 is equal to second division. */

#include <stdio.h>
int main()
{
    int a, b, c;
    float perc;
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &a, &b, &c);
    perc = ((a + b + c) * 100) / 300;
    if (perc >= 60)
    {
        printf("Your percentage is %.2f and you got first division.", perc);
    }
    else if (perc >= 45)
    {
        printf("Your percentage is %.2f and you got second division.", perc);
    }
    else
    {
        printf("Your percentage is %.2f", perc);
    }
    return 0;
}