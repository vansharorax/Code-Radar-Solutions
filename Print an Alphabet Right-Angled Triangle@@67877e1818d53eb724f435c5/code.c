#include <stdio.h>

int main() {
    int ch;
    scanf("%d", &ch);

    for (int i = 1; i <= ch; i++) {
        char a='A'
        for (int j=1; j <= i; j++) {
            printf("%c ", a++);
        }
        printf("\n");
    }

    return 0;
}
