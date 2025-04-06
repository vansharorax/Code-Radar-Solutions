#include <stdio.h>
int main(){
    int num;
    int pos;
    scanf("%d",&num);
    pos = __builtin_ffs(num);
    
    if (pos ==0) {
        printf("-1");
    } else {
        printf("%d",pos -1);
    }
    return 0;
}