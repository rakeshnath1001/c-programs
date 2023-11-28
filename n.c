/* 16.Enter three numbers and display the second largest number. */

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        if (b > c)
        {
            printf("%d is the second largest among all.", b);
        }
        else
        {
            printf("%d is the second largest among all.", c);
        }
    }
    else if (b > c)
    {
        if (a > c)
        {
            printf("%d is the second largest among all.", a);
        }
        else
        {
            printf("%d is the second largest among all.", c);
        }
    }
    else
    {
        if (a > b)
        {
            printf("%d is the second largest among all.", a);
        }
        else
        {
            printf("%d is the second largest among all.", b);
        }
    }
    return 0;
}