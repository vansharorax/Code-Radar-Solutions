#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);

    char i = 'A';
    while (i <= ch) {
        char j = 'A';
        while (j <= i) {
            printf("%c ", j);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
