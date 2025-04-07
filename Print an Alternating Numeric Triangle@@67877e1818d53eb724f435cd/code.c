#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            int z;
            if(i==1 ||j==2||i==3||j==4||i==5) {
                printf("1 ");
            } else {
                printf("0 ");
            }
            
        }
        printf("\n");
    }
}