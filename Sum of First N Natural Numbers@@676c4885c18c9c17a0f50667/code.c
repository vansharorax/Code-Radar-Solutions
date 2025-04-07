#include <stdio.h>

int main() {
    int n, sum = 0, num;


    if (scanf("%d", &n) != 1) {
        printf("Invalid input for 'n'.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        printf("%d", i);
        if (scanf("%d", &num) != 1) {
            printf("Invalid input for number.\n");
            return 1;
        }
        sum += num;
    }

    printf("%d", sum);
    return 0;
}
