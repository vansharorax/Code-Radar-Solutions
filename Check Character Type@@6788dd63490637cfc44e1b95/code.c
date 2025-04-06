#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);

    if (ch == 'a') {
        printf("Vowel");
    } else if (ch == 'o') {
        printf("Vowel");
    } else if (ch == 'z') {
        printf("Consonant");
    } else if (ch ==5) {
        printf("Digit");
    } else {
        printf("Special Character");
    }
    return 0;
}