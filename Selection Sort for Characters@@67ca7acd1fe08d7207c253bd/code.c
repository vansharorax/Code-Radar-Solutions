

#define MAX 100
#define LEN 100


int compareStrings(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] < b[i])
            return -1;
        else if (a[i] > b[i])
            return 1;
        i++;
    }
    if (a[i] == '\0' && b[i] == '\0')
        return 0;
    else if (a[i] == '\0')
        return -1;
    else
        return 1;
}


void copyString(char dest[], char src[]) {
    int i = 0;
    while ((dest[i] = src[i]) != '\0')
        i++;
}

void selectionSort(char arr[][LEN], int n) {
    char temp[LEN];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (compareStrings(arr[i], arr[j]) > 0) {
                copyString(temp, arr[i]);
                copyString(arr[i], arr[j]);
                copyString(arr[j], temp);
            }
        }
    }
}


