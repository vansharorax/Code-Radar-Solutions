#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    char a='A';
    for(int i=n;i>=1;i--) {
        for(int j=1;j<=n;j++) {
            printf("%c ",a++);
        }
        printf("\n");
    }
}