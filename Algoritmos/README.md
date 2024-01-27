# Conceitos Fundamentais de Algoritmos

Um algoritmo é um conjunto de instruções ou regras bem definidas que especificam uma sequência de operações a serem executadas para resolver um problema ou realizar uma tarefa específica. Algoritmos podem ser genéricos e aplicáveis a diferentes conjuntos de dados.
É normal no iníco dos estudos de Algoritmos e estruturas de dados, confundir ambos, emboram sejam distintos um doutro, possuem relações e aplicabilidades distintas. 

### Relação:

Os algoritmos frequentemente manipulam dados armazenados em estruturas de dados. Por exemplo, um algoritmo de ordenação (algoritmo) pode ser aplicado a uma lista(estrutura de dados). Em resumo, algoritmos são procedimentos ou conjuntos de instruções, enquanto estruturas de dados são maneiras de organizar e armazenar dados. Ambos são inter-relacionados e essenciais para o desenvolvimento eficiente de software.

### Complexidade

A complexidade de algoritmo é uma medida teórica que avalia o desempenho de um algoritmo em termos de recursos computacionais necessários para resolver um problema.
Esses recursos podem ser de tempo (complexidade de tempo) ou de espaço (complexidade). A análise de complexidade fornece uma compreensão abstrata do comportamento
de um algoritmo à medida que o tamanho da entrada aumenta.

### Complexidade de Tempo ou Tempo de Execução

O tempo de execução de um algoritmo refere-se à quantidade de tempo que um algoritmo leva para concluir sua execução em relação ao tamanho da entrada. Em outras palavras, é uma medida de quão eficientemente um algoritmo resolve um problema.
A análise do tempo de execução é crucial ao escolher algoritmos para resolver um determinado problema, pois algoritmos mais eficientes resultarão em tempos de execução mais rápidos para entradas grandes. No entanto, é importante observar que o tempo de execução é apenas um aspecto do desempenho de um algoritmo, e outros fatores, como espaço de memória utilizado, também devem ser considerados.

### Complexidade de Espaço

A complexidade de espaço avalia quanto de memória um algoritmo utiliza em relação ao tamanho da entrada. Assim como a complexidade de tempo, é expressa usando a notação
Big O.

### Notação Big O

A notação Big O é uma notação especial que diz o quão rápido é um algoritmo. O tempo de execução dos algoritmos cresce a taxas diferentes. Por exemplo, imagine que vocÊ tem uma lista de tamanho n. O tempo de execução na notação Big O é O(n). A notação Big O não fornece o tempo em segundos. A notação Big O permite que você compare o número de operações. Ela informa o quão rapidamente um algoritmo cresce. 

### Calcular o Big O

Calcular o Big O de uma função envolve analisar como o tempo de execução ou a complexidade de espaço aumenta em relação ao tamanho da entrada da função. A notação Big O,
frequentemente denotada como O(f(n)), representa o limite superior assintótico do crescimento da função em termos do tamanho da entrada (n).

#### Diretrizes gerais para calcular o Big O

    - Identificar Operações Básicas:
        º Examine a função e identifique as operações fundamentais que estão sendo realizadas. Essas operações básicas são geralmente as que têm maior impacto no tempo
        de execução.
    
    - Contar as operações em termos de n:
        º Determine quantas operações básicas são realizadas em termos da variável de entrada (n). Isso envolve contar loops, iterações, operações condicionais, entre
        outras.

    - Descartar termos menores e Constantes
        º Na notação Big O, ignore termos menores e constantes. Concentre-se nos fatores que têm um impacto significativo à medida que o tamanho da entrada se torna grande.

    - Identificar a Forma Geral:
        º Expressar a complexidade em termos de uma função mais geral em relação a n. Por exemplo, se você tiver um loop que itera n vezes e realiza uma operação constante dentro do loop, a complexidade pode ser expressa como O(n).

#### A notação Big O estabelece o tempo de execução para a pior hipótese

Suponha que você utiliza uma pesquisa simples para procurar o nome de
uma pessoa em uma agenda telefônica. Você sabe que a pesquisa simples
tem tempo de execução O(n), o que signi ca que na pior das hipóteses terá
veri cado cada nome da agenda telefônica. Nesse caso, você está
procurando uma pessoa chamada Adit. Essa pessoa é a primeira de sua lista.
Logo, não teve de passar por todos os nomes – você a encontrou na primeira tentativa. Esse algoritmo levou o tempo de execução O(n)? Ou levou O(1)
porque encontrou o que queria na primeira tentativa?
A pesquisa simples ainda assim tem tempo de execução O(n). Nesse caso,
você encontrou o que queria instantaneamente. Essa é a melhor das
hipóteses. A notação Big O leva em conta a pior das hipóteses. Então pode-se
dizer que, para o pior caso, você analisou cada item da lista. Esse é o tempo
O(n). É uma garantia – você sabe, com certeza, que a pesquisa simples
nunca terá tempo de execução mais lento do que O(n).

#### Niveis de Complexidade mais comuns

| Complexidade |   Big O   |             Exemplos de Algoritmo               |
|--------------|-----------|-------------------------------------------------|
| Constante    | O(1)      | Acesso a elementos de um array                  |
| Linear       | O(n)      | Busca sequencial em arrays                      |
| Logarítmica  | O(log n)  | Busca binária em arrays                         |
| Linearítmica | O(n log n)| Classificação de arrays com Merge Sort          |
| Quadrática   | O(n^2)    | Ordenação de arrays com Bubble sort             |
| Polinomial   | O(n^y)    | Determinante de matrizes com decomposição LU    |
| Fatorial     | O(n!)     | Determinante de matrizes com Teorema de Laplace |
|--------------|-----------|-------------------------------------------------|


#### Complexidade de alguns Algoritmos 

| Algoritmo      | Complexidade Temporal | Complexidade Espacial |
|----------------|-----------------------|-----------------------|
| Selection Sort | O(n^2)                | O(1)                  |
| Insertion Sort | O(n^2)                | O(1)                  |
| Bubble Sort    | O(n^2)                | O(1)                  |
| Heap Sort      | O(n log n)            | O(1)                  |
| Merge Sort     | O(n log n)            | O(n)                  |
| Quick Sort     | O(n^2)                | O(log n)              |
| Tree Sort      | O(n^2)                | O(n)                  |
|----------------|-----------------------|-----------------------|

## Tipos de Algoritmos

Neste repositório, você encontrará materiais sobre diferentes tipos de algoritmos.

### Algoritmos de Ordenação:

### [Bubble Sort](../Algoritmos/Algoritmos-de-ordenação/Bubble-Sort/notes.md)

    - Descrição
    - Implementação
    - Exemplos
    - Testes

### [Selection Sort](../Algoritmos/Algoritmos-de-ordenação/Selection_sort/notes.md)

    - Descrição
    - Implementação
    - Exemplos
    - Testes

### [Quick Sort](../Algoritmos/Algoritmos-de-ordenação/Quick-Sort/notes.md)

    - Descrição
    - Implementação
    - Exemplos
    - Testes

### [Merge Sort](../Algoritmos/Algoritmos-de-ordenação/Merge-Sort/notes.md)

    - Descrição
    - Implementação
    - Exemplos
    - Testes

### [Insertion Sort](../Algoritmos/Algoritmos-de-ordenação/Insertion-Sort/notes.md)

    - Descrição
    - Implementação
    - Exemplos
    - Testes

### Algoritmos de Busca:

### [Binary Search](../Algoritmos/Algoritmos-de-Busca/Binary-Search/notes.md)

    - Descrição
    - Implementação
    - Exemplos
    - Testes

### [Linear Search](../Algoritmos/Algoritmos-de-Busca/Linear-Search/notes.md)

    - Descrição
    - Implementação
    - Exemplos
    - Testes

### Algoritmos de Grafos:

### [Dijkstra's Algorithm]()

    - Descrição
    - Implementação
    - Exemplos
    - Testes

### [Breadth-First Search (BFS)]()

    - Descrição
    - Implementação
    - Exemplos
    - Testes

### [Depth-First Search (DFS)]()

    - Descrição
    - Implementação
    - Exemplos
    - Testes


