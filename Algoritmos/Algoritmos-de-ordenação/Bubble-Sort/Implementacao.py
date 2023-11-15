def bubble_sort(array):
    n = len(array)

    for i in range(n - 1):
        for j in range(n - 1):
            if array[j] > array[j+1]:
                # Troca os elementos se estiverem fora de ordem
                array[j], array[j+1] = array[j+1], array[j]

    return array

# Exemplo de uso:
my_array = [64, 34, 25, 12, 22, 11, 90]
sorted_array = bubble_sort(my_array)
print("Array Ordenado:", sorted_array)
