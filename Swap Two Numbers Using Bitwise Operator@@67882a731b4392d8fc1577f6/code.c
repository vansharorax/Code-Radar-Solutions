#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d%d", a, b);

    // XOR Swap
    a = a ^ b;
    b = a ^ b;  // Now b = (a ^ b) ^ b = a
    a = a ^ b;  // Now a = (a ^ b) ^ a = b

    printf("%d %d", a, b);

    return 0;
}
