#include <stdio.h>

void selectionSort(char arr[][100], int n);
void printArray(char arr[][100], int n);
int compareStrings(char s1[], char s2[]);
void swapStrings(char s1[], char s2[]);



void selectionSort(char arr[][100], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (compareStrings(arr[j], arr[min_idx]) < 0) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            swapStrings(arr[i], arr[min_idx]);
        }
    }
}

int compareStrings(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }
        i++;
    }
    return s1[i] - s2[i];
}

void swapStrings(char s1[], char s2[]) {
    char temp[100];
    int i = 0;
    while ((temp[i] = s1[i]) != '\0') i++;
    i = 0;
    while ((s1[i] = s2[i]) != '\0') i++;
    i = 0;
    while ((s2[i] = temp[i]) != '\0') i++;
}

void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    printf("\n");
}
