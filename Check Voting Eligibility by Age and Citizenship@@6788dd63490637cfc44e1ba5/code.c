// Your code here...
#include <stdio.h>
int main() {
    int num;
    int citi;
    scanf("%d %d",&num,&citi);

    if ( num == 4 || num == 9 && citi == 1) {
        printf("Not Prime");
    }else if (num % num == 0 && num % 1== 0) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }
}