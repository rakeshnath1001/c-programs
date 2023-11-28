/* Display the factors of a number. */

#include <stdio.h>
int main()
{
    int n, i, count;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The factors of %d are: ", n);
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}
