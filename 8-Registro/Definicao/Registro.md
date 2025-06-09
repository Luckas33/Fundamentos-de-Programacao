Em C, um **registro** (ou  *record* , em inglês) é um tipo de dado complexo que permite agrupar várias variáveis de **tipos diferentes** sob um único nome. A palavra-chave em C para criar um registro é  **`struct`** .

Pense em um `struct` como uma "ficha de cadastro". Enquanto um vetor armazena vários itens do *mesmo tipo* (como uma lista de notas), um `struct` armazena itens relacionados de *tipos diferentes* (como o nome, a matrícula e a média de um único aluno).

### Por que usar Registros (Structs)?

Eles são usados para modelar entidades do mundo real de forma organizada. **Por exemplo, um dos seus exercícios menciona um funcionário que tem um salário fixo e um valor de vendas**^^^^^^^^. Em vez de ter variáveis separadas, você pode criar um registro `Funcionario` que agrupa todas essas informações.

**Benefícios:**

* **Organização:** Mantém dados relacionados juntos, tornando o código mais limpo e legível.
* **Clareza:** Facilita a passagem de dados complexos para funções. Em vez de passar 5 variáveis como parâmetros, você passa uma única variável do tipo `struct`.
* **Modelagem:** Permite criar seus próprios tipos de dados que representam conceitos complexos.

---

### Como Usar um `struct`

O uso de `structs` envolve dois passos principais:

1. **Definir o Molde (Template):** Primeiro, você define a estrutura do seu registro, especificando quais "campos" (chamados de  **membros** ) ele terá.

   **C**

   ```
   struct NomeDoRegistro {
       tipo1 membro1;
       tipo2 membro2;
       // ...
   };
   ```
2. **Declarar Variáveis:** Depois de definir o molde, você pode declarar variáveis desse novo tipo.

   **C**

   ```
   struct NomeDoRegistro minhaVariavel;
   ```

---

### Acessando Membros

Para acessar ou modificar os membros de uma variável `struct`, você usa o  **operador ponto (`.`)** .

`nome_da_variavel.nome_do_membro`

---

### Exemplo Prático: Modelando o "Funcionário"

**Vamos usar o problema do funcionário **^^^^^^^^ para criar um exemplo completo. **O funcionário tem um salário fixo (float), um valor de vendas (float), uma comissão (float) e um salário final (float)**^^^^^^^^.

**C**

```
#include <stdio.h>

// 1. DEFINIÇÃO DO MOLDE (struct)
struct Funcionario {
    float salario_fixo;
    float valor_vendas;
}; // O ponto e vírgula aqui é obrigatório

int main() {
    // 2. DECLARAÇÃO de uma variável do tipo 'struct Funcionario'
    struct Funcionario func1;

    float comissao, salario_final;

    // Leitura dos dados e armazenamento nos membros da struct usando o operador '.'
    printf("Digite o salario fixo do funcionario: R$ ");
    scanf("%f", &func1.salario_fixo);

    printf("Digite o valor das vendas: R$ ");
    scanf("%f", &func1.valor_vendas);

    // Cálculo da comissão (4%) usando os dados da struct
    comissao = func1.valor_vendas * 0.04;
    salario_final = func1.salario_fixo + comissao;

    // Exibição dos resultados
    printf("\n--- Folha de Pagamento ---\n");
    printf("Comissao a receber: R$ %.2f\n", comissao);
    printf("Salario Final: R$ %.2f\n", salario_final);

    return 0;
}
```

### Facilitando o Uso com `typedef`

Digitar `struct Funcionario` repetidamente pode ser cansativo. Você pode usar a palavra-chave `typedef` para criar um "apelido" para seu tipo de `struct`, tornando o código mais limpo.

**C**

```
// Definindo e criando o apelido 'Funcionario' ao mesmo tempo
typedef struct {
    float salario_fixo;
    float valor_vendas;
} Funcionario; // Agora 'Funcionario' é o nome do tipo

int main() {
    // A declaração fica mais simples
    Funcionario func1;

    // O resto do código permanece o mesmo...
    printf("Digite o salario fixo: ");
    scanf("%f", &func1.salario_fixo);
    // ...
    return 0;
}
```

Esta é a forma mais comum e moderna de se trabalhar com `structs` em C.
