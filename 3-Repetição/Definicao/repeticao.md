### O que são Estruturas de Repetição?

Estruturas de repetição são recursos de um algoritmo que permitem executar um mesmo bloco de código várias vezes, de forma automática. Elas são essenciais para evitar a repetição manual de código e para lidar com tarefas que precisam ser feitas repetidamente até que uma certa condição seja satisfeita.

Um dos seus exercícios, o que pedia para criar uma **tabuada**, é o exemplo perfeito de onde uma estrutura de repetição se torna indispensável. Sem ela, você teria que escrever a linha de cálculo e impressão dez vezes. Com um laço, você escreve o comando uma vez e manda repeti-lo.

Existem três tipos principais de estruturas de repetição:

---

### 1. Estrutura `while` (Enquanto)

Esta é a estrutura de repetição mais flexível. O bloco de código dentro do `while` é executado  **enquanto uma condição for verdadeira** .

* **Como funciona:**
  1. O programa testa a condição.
  2. Se a condição for verdadeira, o bloco de código é executado.
  3. Ao final do bloco, o programa volta ao passo 1 e testa a condição novamente.
  4. Se a condição for falsa, o laço é encerrado e o programa continua sua execução normal.
* **Ponto-chave:** A condição é verificada **antes** de cada execução. Se a condição for falsa desde o início, o bloco de código nunca será executado.
* **Quando usar:** É ideal para situações onde não se sabe de antemão quantas vezes o laço precisa ser executado. Por exemplo, "continue pedindo uma senha enquanto o usuário digitar a senha errada".

**Exemplo em C:**

**C**

```
int i = 1;

while (i <= 5) {
    printf("O valor de i e: %d\n", i);
    i++; // Importante: atualizar a variável da condição para evitar um loop infinito!
}
```

---

### 2. Estrutura `do-while` (Faça-Enquanto)

É uma variação do `while`. A principal diferença é que o bloco de código é executado primeiro e a condição é verificada  **depois** .

* **Como funciona:**
  1. O programa executa o bloco de código  **pelo menos uma vez** .
  2. Ao final do bloco, ele testa a condição.
  3. Se a condição for verdadeira, ele volta ao passo 1.
  4. Se for falsa, o laço é encerrado.
* **Ponto-chave:** Garante que o bloco de código seja executado  **no mínimo uma vez** , independentemente da condição.
* **Quando usar:** Perfeito para menus de opções ou validação de entrada, onde você precisa que a ação (mostrar o menu, pedir o dado) aconteça pelo menos uma vez.

**Exemplo em C:**

**C**

```
int opcao;

do {
    printf("\n--- MENU ---\n");
    printf("1 - Iniciar Jogo\n");
    printf("2 - Ver Pontuacao\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
} while (opcao != 0);

printf("Voce saiu do menu.\n");
```

---

### 3. Estrutura `for` (Para)

Esta é uma estrutura mais compacta e controlada, ideal para quando se sabe o número de repetições necessárias.

* **Como funciona:** A estrutura `for` concentra em uma única linha a **inicialização** de uma variável de controle, a **condição** para continuar a execução e o **incremento** (ou atualização) da variável de controle.
  1. **Inicialização:** Executada uma única vez, antes de tudo.
  2. **Condição:** Verificada antes de cada execução do bloco.
  3. **Execução:** Se a condição for verdadeira, o bloco é executado.
  4. **Incremento:** Executado ao final de cada repetição.
* **Ponto-chave:** É a melhor escolha para percorrer sequências com um número definido de elementos (como um número fixo de repetições).
* **Quando usar:** Perfeito para o exercício da **tabuada**^^. Você sabe que precisa repetir o cálculo 10 vezes (de 1 a 10).

**Exemplo em C (resolvendo o exercício da tabuada):**

**C**

```
#include<stdio.h>

intmain(){
    int numero, i;

    printf("Digite um numero para ver sua tabuada: ");
    scanf("%d", &numero);

    printf("Tabuada de %d:\n", numero);

    // O laço 'for' inicializa i com 1; continua enquanto i <= 10; e incrementa i em 1 a cada volta.
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
```
