#include <stdio.h>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n) {
    int i, j, min_index;
    for (i = 0; i < n-1; i++) {
        min_index = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        swap(&arr[i], &arr[min_index]);
    }
}

int main() {
    int myArray[] = {64, 25, 12, 22, 11};
    int n = sizeof(myArray) / sizeof(myArray[0]);

    printf("Array original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", myArray[i]);
    }
    
    selectionSort(myArray, n);

    printf("\nArray ordenado: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", myArray[i]);
    }
    
    return 0;
}