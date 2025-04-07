#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    for (int i = 1; i <=n;i++) {
        for (int k=1;k<=n-i;k++) {
            printf(" ");
    char a ='A';
        } for (int j=1;j<=i ;j++) {
            printf("%c ",a);
        }
        printf("\n");
    }
}