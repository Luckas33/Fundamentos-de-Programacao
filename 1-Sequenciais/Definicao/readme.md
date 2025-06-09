

## 🎯 O que é Estrutura Sequencial?

A **estrutura sequencial** é a forma mais simples de organização de um algoritmo. Nela, as instruções são executadas em uma sequência fixa, uma após a outra, exatamente na ordem em que aparecem no código, sem desvios ou repetições.

Pense nela como uma receita de bolo: você segue cada passo na ordem correta para obter o resultado final. Não há como pular do primeiro passo para o último.

**Características Principais:**

* **Linearidade:** O fluxo de execução é reto, do início ao fim.
* **Sem Condições:** Não há decisões do tipo "se isso, faça aquilo".
* **Sem Repetições:** As instruções não são executadas em laços (loops).

**Exemplo em C:**
O código a seguir, que calcula a área de um quadrado, é um exemplo perfeito de estrutura sequencial. Cada linha é executada na ordem, da primeira à última.


```c
#include **<stdio.h>**

int main() {
    // 1. Declaração das variáveis
    float lado, area;

    // 2. Entrada de dados (leitura do valor do lado)
    printf("Digite o valor do lado do quadrado: ");
    scanf("%f", &lado);

    // 3. Processamento (cálculo da área)
    area = lado * lado;

    // 4. Saída de dados (exibição do resultado)
    printf("A area do quadrado e: %.2f\n", area);

    return 0;
}
```


---

## 🇵🇹 O que é Portugol?

**Portugol** (ou Português Estruturado) não é uma linguagem de programação real, mas sim uma  **pseudolinguagem** . **Seu objetivo é ajudar estudantes a desenvolver o raciocínio lógico e a entender a estrutura de um algoritmo antes de aprenderem a sintaxe complexa de uma linguagem como C, Python ou Java**^1^.

Ele usa palavras-chave em português e uma sintaxe simplificada para descrever os passos de um algoritmo de forma clara e legível. É uma ponte entre a nossa linguagem natural e a linguagem de máquina.

**Características Principais:**

* **Linguagem em Português:** Utiliza termos como `inicio`, `fim`, `leia`, `escreva`, `se`, `entao`.
* **Foco na Lógica:** A prioridade é a lógica do algoritmo, não os detalhes técnicos da programação.
* **Facilita a Transição:** Torna mais fácil a migração do conceito para o código real.

Exemplo em Portugol:

Veja como o mesmo algoritmo para calcular a área de um quadrado seria escrito em Portugol2.

**Snippet de código**

```portugol
algoritmo "CalcularAreaQuadrado"

// Seção de declaração de variáveis
var
   lado: real
   area: real

inicio
   // Entrada de dados
   escreva("Digite o valor do lado do quadrado: ")
   leia(lado)

   // Processamento
   area <- lado * lado

   // Saída de dados
   escreva("A area do quadrado e: ", area)

fimalgoritmo
```
