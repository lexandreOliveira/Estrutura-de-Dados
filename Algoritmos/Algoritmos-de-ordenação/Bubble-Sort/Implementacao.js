// Função de troca de elementos em um array
function swap(array, i, j) {
    const temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

// Implementação do Bubble Sort
function bubbleSort(array) {
    const n = array.length;

    for (let i = 0; i < n; i++) {
        for (let j = 0; j < n - i - 1; j++) {
            // Compara elementos adjacentes e troca se estiverem fora de ordem
            if (array[j] > array[j + 1]) {
                swap(array, j, j + 1);
            }
        }
    }

    return array;
}

// Exemplo de uso:
const myArray = [64, 34, 25, 12, 22, 11, 90];
const sortedArray = bubbleSort(myArray.slice()); // Criando uma cópia para não modificar o array original
console.log("Array Original:", myArray);
console.log("Array Ordenado:", sortedArray);
