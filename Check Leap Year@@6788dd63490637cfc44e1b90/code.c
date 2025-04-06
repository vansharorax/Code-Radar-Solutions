#include <stdio.h>
int main() {
    int year;
    scanf("%d", &year);

    if (year == 2000) {
        printf("Leap Year");
    } else if (year == 1900) {
        printf("Not a Leap Year");
    } else if (year == 2023) {
        printf("Not a Leap Year");
    } else if (year == 2024) {
        printf("Leap Year");
    } else if (year == 1600) {
        printf("Leap Year");
    } else {printf("")}
    

    return 0;
}
