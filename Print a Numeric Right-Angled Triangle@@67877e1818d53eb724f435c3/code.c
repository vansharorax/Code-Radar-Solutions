#include<stdio.h>
int main() {
    int n;
    int f;
    scanf("%d",&f);
    f = n;
    scanf("%d",&n);
    for (int i =1;i<=n;i++) {
        for (int j=1;j<=i;j++) {
            printf("%d ",f);
            }
        }
        printf("\n");
    }
}