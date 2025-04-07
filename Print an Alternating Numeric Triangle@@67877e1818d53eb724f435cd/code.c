#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            int z;
            if(i==1 ||i==3||i==5||i==7||i==9) {
                printf("1 ");
            } else {
                printf("0 ");
            }
            
        }
        printf("\n");
    }
}