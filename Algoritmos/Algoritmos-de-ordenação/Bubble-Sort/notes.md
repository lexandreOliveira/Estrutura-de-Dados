# Bubble Sort
Algoritmo mais lento e mais simples.
O algoritmo de bubble sort compara cada dois valores adjacentes e faz a sua troca (swap) se o primeiro valor for maior que o segundo. Ele tem esse nome porque aos valores tendem a se mover para cima na ordem correta, como se fossem bolhas subindo para a superfície. 

### Ideia Básica
- O array é pecorrido várias vezes.
- Em cada passagem, os elementos ajacentes são comparados e trocados se estiverem fora de ordem.
- A maior (ou menor, dependendo da ordem desejada) elemento "sobe" para o final da lista após cada passagem.

### Passos do Algoritmo

- Começando pelo início do array, compare os elementos adjacentes.
- Se o elemento à esquerda for maior (ou menor) que o elemento à direita, troque-os.
- Repita este processo para cada par de elementos na lista.
- Continue passando pela lista até que nenhuma troca seja feita em uma passagem completa.

### Pseudocódigo

procedure bubbleSort(A: lista)
    n = comprimento(A)
    repetir
        trocas = falso
        para i de 0 até n-2 faça
            se A[i] > A[i+1] então
                trocar A[i] com A[i+1]
                trocas = verdadeiro
    enquanto trocas for verdadeiro

### Complexidade Temporal

- O Bubble Sort tem uma complexidade de tempo de O(n^2) no pior caso.
- Ele requer várias passagens pela lista, em cada passagem, comparações e possíveis trocas são realizadas.

### Estabilidade

O Bubble Sort é um algoritmo de ordenação estável. 

### Implementações

[Python](../Bubble-Sort/Implementacao.py)

[JavaScript](../Bubble-Sort/Implementacao.js)

[C](../Bubble-Sort/Implementacao.c)