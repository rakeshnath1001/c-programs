/* 18.Enter a character and display it either vowel or consonant. */

#include <stdio.h>
int main()
{
    char ch, lowercase, uppercase;
    printf("Enter a character: ");
    scanf("%c", &ch);
    lowercase = (ch == 'a' || ch == 'b' || ch == 'c' || ch == 'd' || ch == 'e');
    uppercase = (ch == 'A' || ch == 'B' || ch == 'C' || ch == 'D' || ch == 'E');
    if (lowercase || uppercase)
    {
        printf("%c is a vowel.", ch);
    }
    else
    {
        printf("%c is a consonant.", ch);
    }
    return 0;
}