// Copyright 2021 NNTU-CS
int countPairs1(int* arr, int len, int value) {
    int chet = 0;
    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if ((arr[i] + arr[j]) == value)
                chet++;
        }
    }
    return chet;
}

int countPairs2(int* arr, int len, int value) {
    int chet = 0;
    int i = len - 1;
    while (arr[i] > value) {
        i--;
    }
    for (i; i > 0; i--) {
        for (int j = 0; j < i; j++) {        
            if ((arr[i] + arr[j]) == value)
                chet++;
        }
    }
    return chet;
}

int countPairs3(int* arr, int len, int value) {
    int chet = 0;
    int size = len - 1;
    while (arr[size] > value) {
        size--; 
    }
    for (int i = 0; i < size; i++) {
        int twoElement = value - arr[i];
        for (int j = i + 1; j <= size; j++) {
            if (arr[j] == twoElement)
                chet++;
        }
    } 
    return chet;
}
