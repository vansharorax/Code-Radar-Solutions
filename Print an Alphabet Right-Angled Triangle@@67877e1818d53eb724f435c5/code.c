#include <stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    for (int i='A';i<=ch;i++) {
        for(int j='A';j<=i;j++) {
            printf("%c ",j);
        }
        printf("\n");
    }
}