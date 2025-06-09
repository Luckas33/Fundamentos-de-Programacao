### O que são Vetores (Arrays)?

Em C, um **vetor** (ou  *array* , em inglês) é uma estrutura de dados que armazena uma coleção de elementos de **um mesmo tipo** em posições de memória contíguas. Pense nele como uma "gaveta" com vários compartimentos numerados, onde cada compartimento guarda um item do mesmo tipo (só números inteiros, ou só números `float`, etc.).

**Por que usar vetores?**
Imagine que você precise calcular a média de 50 notas de alunos. Sem vetores, você teria que declarar 50 variáveis diferentes: `float nota1, nota2, nota3, ... nota50;`. Isso seria impraticável. Com um vetor, você pode declarar uma única variável para armazenar todas as 50 notas.

---

### Declarando um Vetor

A sintaxe para declarar um vetor é:

`tipo_do_dado nome_do_vetor[tamanho];`

* **`tipo_do_dado`** : O tipo de todos os elementos que o vetor irá armazenar (ex: `int`, `float`, `char`).
* **`nome_do_vetor`** : O nome que você dá à sua coleção de dados.
* **`[tamanho]`** : O número de elementos que o vetor pode conter. Esse tamanho é fixo após a declaração.

**Exemplo:**

**C**

```
// Declara um vetor chamado 'notas' que pode armazenar 10 valores do tipo float.
float notas[10]; 

// Declara um vetor chamado 'idades' que pode armazenar 5 valores do tipo int.
int idades[5];
```

---

### Acessando Elementos: O Índice

Para acessar um elemento específico dentro de um vetor, você usa um  **índice** . O mais importante a saber em C é que  **a indexação de vetores começa em zero (0)** .

Isso significa que:

* O primeiro elemento está no índice `0`.
* O segundo elemento está no índice `1`.
* ...
* O último elemento de um vetor de tamanho `N` está no índice `N - 1`.

**Exemplo:**

**C**

```
int idades[5]; // Vetor com 5 posições (índices de 0 a 4)

// Atribuindo um valor ao primeiro elemento
idades[0] = 20;

// Atribuindo um valor ao último elemento
idades[4] = 35; 

// Acessando e imprimindo o primeiro elemento
printf("A primeira idade e: %d\n", idades[0]);

// Tentar acessar idades[5] resultaria em um erro, pois essa posição está fora dos limites do vetor.
```

---

### Percorrendo um Vetor com Laços (`for`)

A maneira mais comum e eficiente de trabalhar com todos os elementos de um vetor é usando um laço de repetição, especialmente o `for`.

**Exemplo prático:**
Vamos criar um programa que lê 5 notas, as armazena em um vetor e depois calcula a média.

**C**

```
#include <stdio.h>

int main() {
    const int NUM_NOTAS = 5; // Usar uma constante torna o código mais legível
    float notas[NUM_NOTAS];
    float soma = 0.0;
    float media;
    int i;

    // 1. Laço para ler e armazenar as notas no vetor
    printf("Digite as %d notas:\n", NUM_NOTAS);
    for (i = 0; i < NUM_NOTAS; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]); // Lê o valor e armazena na posição 'i' do vetor
    }

    // 2. Laço para somar todos os elementos do vetor
    for (i = 0; i < NUM_NOTAS; i++) {
        soma = soma + notas[i]; // Acessa o valor na posição 'i' e o adiciona à soma
    }

    // 3. Cálculo da média
    media = soma / NUM_NOTAS;

    printf("\nA media das notas e: %.2f\n", media);

    return 0;
}
```

---

### Relação com Strings

Como explicado anteriormente,  **strings em C são simplesmente vetores do tipo `char`** , com a regra especial de que o último elemento deve ser o caractere nulo `'\0'` para marcar o fim da string.
