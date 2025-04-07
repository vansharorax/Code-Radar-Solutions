#include <stdio.h>
int main() {
    int n;
    int sum=0;
    int num;
    scanf("%d",&n);

    for (int i=1;i<=n;i++) {
        scanf("%d",&num);
        sum += num;
        printf("%d",sum);
    }
}