#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    for (int i = n;i <=n;i++) {
        for(int j =1;j<=i;j++) {
            printf("* ");
        } printf("\n");
    }
}