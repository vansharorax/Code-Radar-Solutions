#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=n;j++) {
            printf("%d x %d = %d\t",i,j,i*j);
        }
        printf("\n");
    }
}