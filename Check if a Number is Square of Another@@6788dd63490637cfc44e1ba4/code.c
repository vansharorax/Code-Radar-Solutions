#include <stdio.h>
int main() {
    int n;
    int sn;
    scanf("%d%d",&n,&sn);
    if (n == sn*sn ) {
        printf("Yes");
    } else {
        printf("No");
    }
}