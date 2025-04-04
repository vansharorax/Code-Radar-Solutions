#include <stdio.h>

int main() {
    int a;
    int b;
    int result;


    pritnf("Enter two numbers seperated by space : ");
    scanf("%d %d",&a,&b);

    result = a | b;
    printf("Result of %d | %d is : %d\n",a,b,result);

    return 0;
    


}