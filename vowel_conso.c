#include<stdio.h>
#include<ctype.h> // Include ctype.h for tolower()

void checkAlphabet(char alpha)
{
    char checkAlpha = tolower(alpha); // Correct usage of tolower() function
    if(checkAlpha == 'a' || checkAlpha == 'e' || checkAlpha == 'i' || checkAlpha == 'o' || checkAlpha == 'u')
    {
        printf("The given alphabet is a vowel: %c\n", alpha); // Added newline for better formatting
    }
    else
    {
        printf("The given alphabet is a consonant: %c\n", alpha); // Added newline for better formatting
    }    
}

int main()
{
    char alpha;
    printf("Enter an alphabet: ");
    scanf(" %c", &alpha); // Added space before %c to consume any leading whitespace
    checkAlphabet(alpha);
    return 0;
}
