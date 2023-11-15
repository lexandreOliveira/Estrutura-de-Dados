# Conceitos Fundamentais de Algoritmos
Um algoritmo é um conjunto de instruções ou regras bem definidas que especificam uma sequência de operações a serem executadas para resolver um problema ou realizar uma tarefa específica. Algoritmos podem ser genéricos e aplicáveis a diferentes conjuntos de dados.
É normal no iníco dos estudos de Algoritmos e estruturas de dados, confundir ambos, emboram sejam distintos um doutro, possuem relações e aplicabilidades distintas. 
### Relação:
Os algoritmos frequentemente manipulam dados armazenados em estruturas de dados. Por exemplo, um algoritmo de ordenação (algoritmo) pode ser aplicado a uma lista(estrutura de dados). Em resumo, algoritmos são procedimentos ou conjuntos de instruções, enquanto estruturas de dados são maneiras de organizar e armazenar dados. Ambos são inter-relacionados e essenciais para o desenvolvimento eficiente de software.

### Tempo de Execução

O tempo de execução de um algoritmo refere-se à quantidade de tempo que um algoritmo leva para concluir sua execução em relação ao tamanho da entrada. Em outras palavras, é uma medida de quão eficientemente um algoritmo resolve um problema.
A análise do tempo de execução é crucial ao escolher algoritmos para resolver um determinado problema, pois algoritmos mais eficientes resultarão em tempos de execução mais rápidos para entradas grandes. No entanto, é importante observar que o tempo de execução é apenas um aspecto do desempenho de um algoritmo, e outros fatores, como espaço de memória utilizado, também devem ser considerados.

### Notação Big O

A notação Big O é uma notação especial que diz o quão rápido é um algoritmo. O tempo de execução dos algoritmos cresce a taxas diferentes. Por exemplo, imagine que vocÊ tem uma lista de tamanho n. O tempo de execução na notação Big O é O(n). A notação Big O não fornece o tempo em segundos. A notação Big O permite que você compare o número de operações. Ela informa o quão rapidamente um algoritmo cresce. 

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

#### Alguns exemplos comuns de tempo de execução Big O
Aqui temos cinco tempos de execução Big O que você encontrará bastante,
ordenados do mais rápido para o mais lento.
• O(log n), também conhecido como tempo logarítmico. Exemplo: pesquisa
binária.
• O(n), conhecido como tempo linear. Exemplo: pesquisa simples.
• O(n * log n). Exemplo: um algoritmo rápido de ordenação, como a
ordenação quicksort.
• O(n2). Exemplo: um algoritmo lento de ordenação, como a ordenação por
seleção.
• O(n!)Exemplo: um algoritmo bastante lento, como o do caixeiro-viajante.


## Tipos de Algoritmos

Neste repositório, você encontrará materiais sobre diferentes tipos de algoritmos.

### Algoritmos de Ordenação:

### [Bubble Sort](../Algoritmos/Algoritmos-de-ordenação/Bubble-Sort/notes.md)

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


