#include <stdio.h>
int main() {
    int a;
    int b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if (c == '*') {
        printf("%d",a*b);
    } else if(c == '/') {
        if (b!=0) {
            printf("%d",a/b);
        } else {
            printf("error");
        }
    } else if(c == '+') {
        printf("%d",a+b);
    } else if(c == '-') {
        printf("%d",a-b);
    } else {
        printf("");
    }
}