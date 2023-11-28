/* 25.Calculate S = 1 + 3 + 5 + 7 + 9 + 11. (Use loop) */

#include <stdio.h>
int main()
{
    int i, sum, a;
    for (i = 1; i <= 6; i++)
    {
        printf("Enter %d number: ", i);
        scanf("%d", &a);
        sum += a;
    }
    printf("The value of S is: %d", sum);
    return 0;
}