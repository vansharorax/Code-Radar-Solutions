#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num == 0) {
        printf("0");
    } else {
        int trailingZeros = __builtin_ctz(num);
        printf("%d", trailingZeros);
    }

    return 0;
}
