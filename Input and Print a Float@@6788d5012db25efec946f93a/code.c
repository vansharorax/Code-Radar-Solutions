#include <stdio.h>

int add(int a, int b, int c) {
    return a + b + c;
}

int product(int a, int b, int c) {
    return a * b * c;
}

int main() {
    int num1, num2, num3, num4;
    
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    
    int sum = add(num1, num2, num3);
    int prod = product(num1, num2, num3);
    
    printf("Sum of first three numbers: %d\n", sum);
    printf("Product of first three numbers: %d\n", prod);

    return 0;
}