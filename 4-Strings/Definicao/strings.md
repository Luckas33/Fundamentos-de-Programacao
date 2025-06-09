Em C, uma **string** não é um tipo de dado primitivo como `int` ou `float`. Em vez disso, uma string é representada como um **array (vetor) de caracteres** que termina com um caractere especial nulo, o `\0`. Esse caractere nulo serve como um marcador, indicando para as funções onde a string termina na memória.

---

### Como funciona?

Quando você cria uma string como `"UFC"`, a linguagem C a armazena na memória como uma sequência de caracteres, adicionando o `\0` no final. Portanto, para armazenar "UFC", que tem 3 caracteres, você precisa de um array de tamanho 4.

`'U' | 'F' | 'C' | '\0'`

Se o caractere `\0` não estiver presente, as funções de manipulação de string continuarão lendo posições de memória adjacentes, o que pode levar a erros e falhas de segurança.

---

### Declarando e Inicializando Strings

Você pode declarar e inicializar strings de algumas maneiras:

**C**

```
// Declara um array de char com espaço para 9 caracteres + o nulo.
char nome[10];

// Inicializa a string com um literal. O compilador calcula o tamanho (3 + 1) e adiciona o '\0' automaticamente.
char universidade[] = "UFC"; 

// Inicialização manual. Você DEVE adicionar o caractere nulo.
char curso[] = {'F', 'P', '\0'};
```

---

### Lendo Strings do Teclado

Existem duas formas principais para ler strings, cada uma com suas particularidades.

* **`scanf()`** : É mais simples, mas limitado. Ele para a leitura no primeiro caractere de espaço em branco (espaço, tab, enter). Por isso, não serve para ler nomes completos. Além disso, é inseguro, pois não verifica o tamanho do array, podendo causar  *buffer overflow* .

  **C**

```
  char primeiro_nome[20];
  printf("Digite seu primeiro nome: ");
  scanf("%s", primeiro_nome); // Se o usuário digitar "José Carlos", só "José" será lido.
```

* **`fgets()`** : É a forma mais segura e recomendada. Ela lê uma linha inteira, incluindo espaços, até a quebra de linha (`\n`) ou até atingir o limite de tamanho do array.

  **C**

```
  char nome_completo[50];
  printf("Digite seu nome completo: ");
  fgets(nome_completo, 50, stdin); // Lê até 49 caracteres + '\0' de forma segura.
```

---

### Funções Essenciais da `<string.h>`

Para manipular strings, você precisa incluir a biblioteca `<string.h>`. Algumas das funções mais importantes são:

* **`strlen(string)`** : Retorna o comprimento da string (o número de caracteres antes do `\0`).
* **`strcpy(destino, origem)`** : **Copia** o conteúdo da string de `origem` para a string de `destino`. É crucial que o `destino` tenha espaço suficiente.
* **`strcat(destino, origem)`** : **Concatena** (junta) a string de `origem` ao final da string de `destino`. O `destino` precisa ter espaço para ambas as strings.
* **`strcmp(string1, string2)`** : **Compara** duas strings.
* Retorna `0` se forem iguais.
* Retorna um valor `< 0` se `string1` for alfabeticamente menor que `string2`.
* Retorna um valor `> 0` se `string1` for alfabeticamente maior que `string2`.
