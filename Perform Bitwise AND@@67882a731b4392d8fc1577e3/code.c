#include<stdio.h>
int main() {
    int a;
    int b;
    int c;

    scanf("%d %d",&a,&b);
    c = a & b;

    printf("%d",c);
    return 0;
}