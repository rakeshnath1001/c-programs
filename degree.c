#include<stdio.h>

int main()
{
    int A, B;
    printf("Enter the percentage of the main subject: ");
    scanf("%d", &A);
    printf("Enter the percentage of the subsidiary subject: ");
    scanf("%d", &B);

    if (A >= 45 && B >= 45)
    {
        printf("The student is passed");
    }
    else if ((A >= 45 || A >= 55) && B >= 55) 
    {
        printf("The student is passed");
    }
    else if (A >= 65 && B <= 45) 
    {
        printf("The student is allowed to reappear in B");
    }
    else
    {
        printf("The student is failed");
    }

    return 0;
}