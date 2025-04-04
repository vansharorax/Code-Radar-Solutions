#include <stdio.h>

int main() {
    int a;
    int b;
    int result;


    printf("Enter two numbers seperated by space : ");
    scanf("%d %d",&a,&b);

    result = a | b;
    printf("%d\n",result);

    return 0;



}