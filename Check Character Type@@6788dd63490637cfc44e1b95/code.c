#include <stdio.h>

int main() {
    char a;
    scanf("%c"&a);
    if (a=='AEIOUaeiou'){
        printf("Vowel");
    }
    else {
        printf("Consonant");
    } 
    return 0;
}