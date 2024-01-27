function selectionSort(arr) {
    const n = arr.length;
    
    for (let i = 0; i < n-1; i++) {
        let minIndex = i;

        for (let j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Troca os elementos
        [arr[i], arr[minIndex]] = [arr[minIndex], arr[i]];
    }
}

// Exemplo de uso:
const myArray = [64, 25, 12, 22, 11];
console.log("Array original:", myArray);

selectionSort(myArray);

console.log("Array ordenado:", myArray);
