/*  28.Add all digits of a nunber. For example in 3217, result will
    be (3+2+1+7)=13. */

#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%10d", &n);
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("The sum of the digits is %d", sum);
    return 0;
}