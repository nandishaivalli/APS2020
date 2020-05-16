/*
 given a string find if any permutation is palindrome
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char palindrome[] = "gdaga";
    int asci[26], count = 0;
    memset(asci, 0, 26 * sizeof(asci[0]));

    for (int i = 0; i < strlen(palindrome); i++)
    {
        asci[palindrome[i] - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (asci[i] % 2 != 0)
        {
            count++;
        }
        if (count > 2)
        {
            printf("%s cannot be a palindrome", asci);
            break;
        }
    }

    return 0;
}