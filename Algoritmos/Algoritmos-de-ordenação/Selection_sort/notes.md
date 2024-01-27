# Selection Sort

É um algoritmo de ordenação simples por comparação in-place. Ele encontra um valor mínimo numa estrutura de dados, colocá-lo na primeira posição, então encontra o segundo valor mínimo, colocá-lo no segundo valor mínimo, e assim sucessivamente. 

### Ideia Básica

- O array é dividido em duas partes: uma parte ordenada e outra parte não ordenada.
- A parte ordenada é construída à medida que os elementos são selecionados e movidos para o inicio da lista ordenado

### Passos do Algoritmo

- Inicialmente toda a lista é considerada como não ordenada.
- Encontre o menor elemento na lista não ordenada.
- Troque o menor elemento encontrado com o primeiro elemento não ordenado.
- A parte ordenada na lista é então estendida para incluir esse elemento recém-ordenado.
- Repita esses passos até que toda a lista esteja ordenada.

### Pseudocódigo

procedure selectionSort(A: lista)
    n = comprimento(A)
    para i de 0 até n-2 faça
        indiceMenor = i
        para j de i + 1 até n - 1 faça
            se A[j] < A[indiceMenor] então
                indiceMenor = j
        trocar A[i] com A[indiceMenor]

### Complexidade Temporal

- O selection Sort possui uma complexidade de tempo de O(n^2), no pior caso, onde n é o número de elementos ana lista
- A cada iteração, o algoritmo realiza uma comparação e uma possível troca, resultando em n * (n - 1)/2 comparações no total.

### Estabilidade

O selection sort é um algoritmo de ordenação estável, o que significa que a ordenação relativa de elementos iguais não é 
alterada durante a ordenação.

### Implementações

[Python](../Selection_sort/Implementacao.py)

[JavaScript](../Selection_sort/Implementacao.js)

[C](../Selection_sort/Implementacao.c)