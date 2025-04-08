#include <stdio.h>
#include <string.h>

#define MAX 100
#define LEN 100

void selectionSort(char arr[][LEN], int n) {
    char temp[LEN];
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    char arr[MAX][LEN];

    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    selectionSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }

    return 0;
}
