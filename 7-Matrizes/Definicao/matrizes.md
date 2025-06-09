### O que são Matrizes (Arrays 2D)?

Em C, uma **matriz** é um array de duas dimensões, que pode ser visualizado como uma  **tabela ou grade com linhas e colunas** . Assim como um vetor, todos os elementos de uma matriz devem ser do  **mesmo tipo** .

Se um vetor é como uma lista de compras, uma matriz é como uma planilha do Excel ou um tabuleiro de xadrez: os dados são organizados não apenas em sequência, mas em uma estrutura bidimensional.

**Por que usar matrizes?**
Elas são ideais para representar:

* Tabelas de dados (ex: notas de vários alunos em várias disciplinas).
* Imagens (onde cada pixel é um ponto em uma grade de altura e largura).
* Tabuleiros de jogos (xadrez, jogo da velha, campo minado).
* Mapas e labirintos.

---

### Declarando uma Matriz

A sintaxe para declarar uma matriz é uma extensão da sintaxe de um vetor:

`tipo_do_dado nome_da_matriz[numero_de_linhas][numero_de_colunas];`

**Exemplo:**

**C**

```
// Declara uma matriz para um tabuleiro de jogo da velha 3x3.
int jogo_da_velha[3][3];

// Declara uma matriz para armazenar as notas de 10 alunos em 4 disciplinas.
float notas_turma[10][4]; 
```

Na memória, os elementos são armazenados de forma contígua, geralmente linha por linha. A matriz `notas_turma` acima, por exemplo, reserva espaço para `10 * 4 = 40` elementos do tipo `float`.

---

### Acessando Elementos

Para acessar um elemento em uma matriz, você precisa de  **dois índices** : um para a **linha** e outro para a  **coluna** . Assim como nos vetores, a indexação **começa em zero** para ambas as dimensões.

`nome_da_matriz[indice_da_linha][indice_da_coluna]`

**Exemplo:**

**C**

```
float notas_turma[10][4]; // Linhas de 0 a 9, colunas de 0 a 3

// Atribuindo a nota 8.5 para o primeiro aluno (linha 0) na segunda disciplina (coluna 1).
notas_turma[0][1] = 8.5;

// Acessando a nota do décimo aluno (linha 9) na quarta disciplina (coluna 3).
printf("Nota: %.2f\n", notas_turma[9][3]);
```

---

### Percorrendo uma Matriz com Laços Aninhados

Para trabalhar com todos os elementos de uma matriz, a abordagem padrão é usar **laços aninhados** (um laço dentro do outro). O laço externo geralmente percorre as linhas, e o laço interno percorre as colunas de cada linha.

**Exemplo prático:**
Vamos criar um programa que preenche uma matriz 2x3 com números e depois a exibe na tela no formato de tabela.

**C**

```
#include <stdio.h>

int main() {
    const int LINHAS = 2;
    const int COLUNAS = 3;
    int matriz[LINHAS][COLUNAS];
    int i, j; // i para linhas, j para colunas

    // 1. Laços aninhados para preencher a matriz
    printf("Digite os %d valores para a matriz %dx%d:\n", LINHAS * COLUNAS, LINHAS, COLUNAS);
    for (i = 0; i < LINHAS; i++) {       // Laço externo para as linhas
        for (j = 0; j < COLUNAS; j++) {  // Laço interno para as colunas
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // 2. Laços aninhados para exibir a matriz
    printf("\nMatriz digitada:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]); // '\t' (tab) ajuda a alinhar as colunas
        }
        printf("\n"); // Pula para a próxima linha no final de cada linha da matriz
    }

    return 0;
}
```

### Inicialização de Matrizes

Você também pode inicializar uma matriz no momento da declaração usando chaves aninhadas, onde cada conjunto interno de chaves representa uma linha.

**C**

```
int matriz[2][3] = {
    {10, 20, 30},  // Primeira linha (índice 0)
    {40, 50, 60}   // Segunda linha (índice 1)
};
```
