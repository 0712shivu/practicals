#include<conio.h>
#include <stdio.h>

void Palindrome(char* str1);

int main()
{
    char str[100];

    printf("Enter a string:");
    scanf("%s",&str);

    Palindrome(str);

    return 0;
}

void Palindrome(char* str1)
{
    char *ptr, *rev;

    ptr = str1;

    while (*ptr != '\0')
    {
        ++ptr;
    }
    --ptr;

    for (rev = str1; ptr >= rev;rev++)
        {
        if (*ptr == *rev)
            --ptr;
        else
            break;
        }

    if (rev > ptr)
        printf("String is Palindrome");
    else
        printf("String is not a Palindrome");
}
