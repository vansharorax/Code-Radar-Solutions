#include <stdio.h>

int main() {
    int ch;
    scanf(" %c", &ch);

    for (int i = 1; i <= ch; i++) {
        for (char j = 'A'; j <= i; j++) {
            printf("%c ", j);
        }
        printf("\n");
    }

    return 0;
}
