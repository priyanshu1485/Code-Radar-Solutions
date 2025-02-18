#include <stdio.h>
#include <ctype.h>  // For isdigit() and tolower() functions

int main() {
    char ch;

    // Input a single character
    printf("");
    scanf("%c", &ch);

    // Check if the character is a vowel or consonant
    if (isalpha(ch)) {
        char lowerCh = tolower(ch);  // Convert to lowercase for easier comparison
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    }
    // Check if the character is a digit
    else if (isdigit(ch)) {
        printf("Digit\n");
    }
    // If it's not a letter or digit, it's a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}