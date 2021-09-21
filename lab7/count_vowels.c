#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main()
{
    char str[100];
    int len, vowel = 0, consonants = 0, numbers = 0;
    printf("Enter the string: ");
    gets(str);
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {vowel += 1;}
        else if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {consonants += 1;}
        else if (str[i] >= '0' && str[i] <= '9')
        {
            numbers += 1;
        }
    }
    printf("Number of \nVowels = %d \nConsonants = %d \nNumbers = %d ", vowel, consonants, numbers);
}