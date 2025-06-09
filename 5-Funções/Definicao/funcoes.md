Em programação C, uma **função** é um bloco de código independente e reutilizável que realiza uma tarefa específica. Em vez de escrever todo o seu código dentro de uma única e longa sequência, você pode quebrar o problema em partes menores e mais gerenciáveis, onde cada parte se torna uma função.

A principal função que você já usa em todos os seus programas é a `main()`. Ela é o ponto de entrada obrigatório de qualquer programa C.

### Por que usar Funções?

1. **Organização e Modularidade:** Funções permitem dividir um programa complexo em "módulos" menores e mais simples. É mais fácil entender e trabalhar com uma função que calcula a média do que com um código gigante que faz tudo de uma vez.
2. **Reutilização de Código (Princípio DRY - Don't Repeat Yourself):** Se você precisa realizar a mesma tarefa várias vezes em diferentes partes do seu programa, basta escrever a função uma vez e "chamá-la" sempre que precisar.
3. **Facilidade de Manutenção e Depuração:** Se houver um erro em uma tarefa específica, você sabe exatamente qual função inspecionar. Corrigir um erro em uma função corrige-o em todos os lugares onde ela é usada.

---

### Os 3 Passos para Usar uma Função

Para usar uma função em C (além da `main`), você geralmente segue três passos:

1. **Declaração (Protótipo):** É um aviso para o compilador, informando que a função existe. Ela diz o nome da função, o tipo de valor que ela retorna e os tipos dos parâmetros que ela espera receber. Geralmente, os protótipos são colocados no topo do arquivo, antes da `main`.
2. **Definição (Implementação):** É o corpo da função, onde você escreve o código que de fato executa a tarefa. A definição pode vir antes ou depois da `main`, mas por organização, é comum colocá-la após o término da `main`.
3. **Chamada (Invocação):** É o ato de executar a função. Você faz isso a partir da `main` ou de outra função, passando os valores necessários (argumentos) para os parâmetros da função.

---

### Anatomia de uma Função

Uma função típica tem a seguinte estrutura:

`tipo_de_retorno nome_da_funcao(tipo parametro1, tipo parametro2);` **<- Declaração (Protótipo)**

`tipo_de_retorno nome_da_funcao(tipo parametro1, tipo parametro2)` **<- Cabeçalho da Definição**
`{`
`// Corpo da função: código que executa a tarefa`
`return valor;` **<- Instrução de retorno**
`}`

* **Tipo de Retorno:** O tipo de dado que a função devolve após sua execução (ex: `int`, `float`, `char`). Se a função não retorna nenhum valor, usa-se o tipo  **`void`** .
* **Nome da Função:** Um nome descritivo que segue as regras de nomenclatura de variáveis.
* **Parâmetros:** As "entradas" da função. São variáveis que recebem valores quando a função é chamada. Uma função pode não ter parâmetros.
* **Corpo da Função:** O bloco de código entre chaves `{}` que realiza a tarefa.
* **Instrução `return`:** Envia um valor de volta para quem chamou a função. A execução da função termina na instrução `return`.

---

### Exemplo Prático: Transformando um Exercício em Função

**Vamos pegar o exercício que calcula a área de um trapézio. **^^^^^^^^ **A fórmula é **A**=**2**(**base maior**+**base menor**)**×**altura****. **^^^^^^^^

**Antes (Tudo na `main`):**

**C**

```
#include <stdio.h>

int main() {
    float base_maior, base_menor, altura, area;
    printf("Digite a base maior: ");
    scanf("%f", &base_maior);
    //... (leitura dos outros valores)

    area = ((base_maior + base_menor) * altura) / 2;

    printf("A area e: %.2f\n", area);
    return 0;
}
```

**Depois (Usando uma Função):**

**C**

```
#include <stdio.h>

// 1. DECLARAÇÃO (PROTÓTIPO) da função
float calcularAreaTrapezio(float bMaior, float bMenor, float alt);

int main() {
    float base_maior, base_menor, altura, area_calculada;

    // Leitura dos dados na main
    printf("Digite o valor da base maior: ");
    scanf("%f", &base_maior);
    printf("Digite o valor da base menor: ");
    scanf("%f", &base_menor);
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    // 3. CHAMADA da função
    // Os valores são passados como argumentos para a função.
    // O resultado retornado pela função é armazenado na variável 'area_calculada'.
    area_calculada = calcularAreaTrapezio(base_maior, base_menor, altura);

    // Exibição do resultado na main
    printf("A area do trapezio e: %.2f\n", area_calculada);

    return 0;
}

// 2. DEFINIÇÃO (IMPLEMENTAÇÃO) da função
// A função recebe os parâmetros e foca apenas no cálculo.
float calcularAreaTrapezio(float bMaior, float bMenor, float alt) {
    float area; // Variável local da função
    area = ((bMaior + bMenor) * alt) / 2;
    return area; // Devolve o resultado calculado
}
```

Neste novo modelo, a função `main` cuida da interação com o usuário (entrada e saída), enquanto a função `calcularAreaTrapezio` cuida da lógica específica do cálculo, tornando o código mais organizado e a lógica de cálculo reutilizável.
