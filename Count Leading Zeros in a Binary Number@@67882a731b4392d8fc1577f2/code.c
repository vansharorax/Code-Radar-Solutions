#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num == 0) {
        printf(0);
    } else {
        int leadingZeros = __builtin_clz(num);
        printf("%d", leadingZeros);
    }

    return 0;
}
