#include <stdio.h>
int main(){
    int num;
    int pos;
    scanf("%d%d",&num,&n);
    pos = __builtin_ffs(num);
    printf("%d",pos);
    return 0;
}