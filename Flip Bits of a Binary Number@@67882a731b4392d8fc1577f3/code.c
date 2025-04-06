#include <stdio.h>

int main() {
    int num, flipped;
    scanf("%d", &num);

    flipped = ~num;

    
    printf("%d", flipped);

    return 0;
}
