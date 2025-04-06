#include <stdio.h>

int main() {
    int num;
    int n;
    scanf("%d",&num,&n);

    int bit = (num > n);
    printf("%d",bit);
    return 0;
}