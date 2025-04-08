#include <stdio.h>
#include <string.h>

#define MAX 100     // Maximum number of strings
#define LEN 100     // Maximum length of each string

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

void printArray(char arr[][LEN], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}


