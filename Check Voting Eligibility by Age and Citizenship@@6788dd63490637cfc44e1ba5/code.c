#include <stdio.h>
int main() {
    int age;
    int citi;
    scanf("%d %d",&age,&citi);
    if (age >= 18 && citi ==1) {
        printf("Eligible");
    } else {
        printf("Not Eligible");
    }
}