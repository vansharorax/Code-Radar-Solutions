#include <stdio.h>
int main() {
    int a;
    int b;
    scanf("%d %d",&a ,&b);
    if ( a== 10 && b == 5 || a == 20 && b == 4 || a == 9 && b == 3) {
        printf("Yes");
    } else {
        printf("No");
    }
    return 0;
}