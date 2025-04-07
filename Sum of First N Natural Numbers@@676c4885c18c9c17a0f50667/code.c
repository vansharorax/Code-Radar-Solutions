#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int num;
        int sum=0;
        scanf("%d", &num);  
        sum += num;         
    }

    printf("%d", sum);  
    return 0;
}
