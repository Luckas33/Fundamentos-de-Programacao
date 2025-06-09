
### O que são Estruturas Condicionais?

Estruturas condicionais, também conhecidas como estruturas de decisão, são um recurso fundamental em algoritmos que permitem ao programa tomar decisões e executar blocos de código diferentes com base na veracidade de uma condição. **O objetivo principal dessas estruturas, conforme o seu material, é introduzir a capacidade de um programa escolher um caminho em vez de seguir uma única sequência linear de passos**.

Essas estruturas avaliam uma expressão lógica e, se o resultado for verdadeiro, um conjunto de instruções é executado. **Caso contrário, um conjunto alternativo de instruções pode ser executado, ou o programa pode simplesmente seguir em frente**.

#### 1. Condicional Simples (`if` / `se`)

A estrutura mais básica, onde um bloco de código é executado apenas se uma única condição for atendida.

* **Exemplo Prático:** O exercício que concede aumento a funcionários com salários inferiores a R$ 900,00^^.

  * **Condição:** `salario < 900.00`.
  * **Ação (se verdadeiro):** O programa calcula e mostra o salário reajustado^^. **Se a condição for falsa, nenhuma ação de reajuste é tomada, e o programa pode simplesmente terminar ou exibir uma mensagem de que não há direito ao aumento**^^.

#### 2. Condicional Composta (`if-else` / `se-senao`)

Essa estrutura define dois caminhos: um para quando a condição é verdadeira e outro para quando é falsa.

* **Exemplo Prático:** O exercício que verifica se um número é múltiplo de 3^^.

  * **Condição:** A verificação se o resto da divisão do número por 3 é igual a zero.
  * **Ação (se verdadeiro):** O programa imprime a mensagem "é múltiplo de 3"^^.
  * **Ação (se falso):** O programa executa o bloco alternativo, imprimindo "não é múltiplo de 3"^^.

#### 3. Condicional Encadeada (`if-else if-else` / `se-senao se-senao`)

Utilizada para testar uma sequência de múltiplas condições. O programa executa o bloco de código correspondente à primeira condição verdadeira que encontrar.

* **Exemplo Prático:** O cálculo do crédito especial para clientes de um banco^^.

  * **O programa primeiro testa se o saldo é "Acima de R$ 400,00"**^^.
  * **Se não for, ele testa a segunda condição: se o saldo está "Entre R$ 400,00 - R$ 300,00"**.
  * **O processo continua, testando cada faixa de saldo até que uma seja verdadeira, aplicando o percentual correspondente**. **Um bloco final (**`<span class="citation-133">else</span>`) pode ser usado para a última faixa ("Até R$ 200,00").

#### 4. Estrutura de Múltipla Escolha (`switch-case`)

Essa estrutura é ideal quando se precisa comparar o valor de uma única variável com vários valores constantes possíveis.

* **Exemplo Prático:** O exercício que executa uma operação matemática de acordo com a escolha do usuário^^.

  * **Variável de teste:** A opção numérica digitada pelo usuário.
  * **Casos:** O programa compara a escolha com os valores 1, 2, 3 e 4^^.
  * **Ação:** Para cada caso correspondente, uma operação diferente é executada (média, diferença, produto ou divisão)^^.
  * **Caso Padrão (`<span class="citation-129">default</span>`):** Se a escolha do usuário não corresponder a nenhum dos casos, uma mensagem de erro é exibida, conforme solicitado^^
