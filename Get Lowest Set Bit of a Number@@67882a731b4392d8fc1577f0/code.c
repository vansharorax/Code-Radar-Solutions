#include <stdio.h>
int main(){
    int num;
    int pos;
    scanf("%d%d",&num);
    pos = __builtin_ffs(num);
    
    if (pos ==0) {
        printf("0");
    } else {
        printf("1");
    }
    return 0;
}