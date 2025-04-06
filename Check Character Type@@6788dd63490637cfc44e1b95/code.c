#include <stdio.h>

int main() {
    char a,z;
    scanf("%c",&a,&z);

    if (a) {
        printf("Vowel");
    } else if ( z) {
        printf("Consonant");
    }
}