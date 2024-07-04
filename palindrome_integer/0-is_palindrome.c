#include "palindrome.h"
/**
* is_palindrome - checks if a number is a palindrome
* @n: the number to check
* Return: 1 if n is palindrome 0 if it's not
*/

int is_palindrome(unsigned long n)
{
    int reverse = 0, recomp;
    int origine = n;

    while (n != 0)
    {
        recomp = n % 10;
        reverse = (reverse * 10) + recomp;
        n /= 10;
    }

    if (origine == reverse)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
