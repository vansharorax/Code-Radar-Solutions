#include <stdio.h>
int main(){
    int num;
    int pos;
    scanf("%d%d",&num,&pos);
    pos = __builtin_ffs(num);
    printf("%d",pos);
    return 0;
}