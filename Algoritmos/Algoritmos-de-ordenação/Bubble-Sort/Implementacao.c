#include <stdio.h>

// Função para trocar dois elementos de posição em um array
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Função de ordenação usando o algoritmo Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Compara elementos adjacentes e troca se estiverem fora de ordem
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Função para imprimir um array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Exemplo de uso
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array original: \n");
    printArray(arr, n);

    // Chama a função bubbleSort para ordenar o array
    bubbleSort(arr, n);

    printf("Array ordenado: \n");
    printArray(arr, n);

    return 0;
}
