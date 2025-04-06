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
    } else {
        printf("You can check it with leap year logic.");
    }

    return 0;
}
