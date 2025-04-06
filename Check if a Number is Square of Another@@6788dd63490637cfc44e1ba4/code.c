#include <stdio.h>
int main() {
    int n;
    int sn;
    scanf("%d",&n,&sn);
    if (n*n == sn) {
        printf("Yes");
    } else {
        printf("No");
    }
}