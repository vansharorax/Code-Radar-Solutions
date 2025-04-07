#include <stdio.h>

int main() {
    int n, sum = 0, num;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &num);  
        sum += num;         
    }

    printf("%d", sum);  
    return 0;
}
