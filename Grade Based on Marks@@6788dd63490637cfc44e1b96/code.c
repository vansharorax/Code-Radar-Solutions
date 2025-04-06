#include <stdio.h>
int main() {
    int marks;
    scanf("%d",&marks);

    if (marks == 95) {
        printf("A");
    } else if (marks == 85) {
        printf("B");
    } else if (marks == 75) {
        printf("C");
    } else if (marks == 65) {
        printf("D");
    } else if (marks == 50) {
        printf("F");
    }
}