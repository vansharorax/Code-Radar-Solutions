#include <stdio.h>
int main(){
    char light;
    scanf("%c",&char);
    if (char == 'R') { printf("Stop"); }
    else if ( char == 'G') { printf("Go"); }
    else if ( char == 'Y') { printf("Slow Down"); }
    else { printf("Invalid input"); }
}