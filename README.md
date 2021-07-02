# Crivo-de-Eratostenes

Implementação do algoritmo do Crivo de Eratostenes, para a disciplina Estrutura de Dados 2.

### Introdução

O Crivo de Eratóstenes (em inglês Sieve of Eratosthenes) é um algoritmo milenar para se
encontrar todos os números primos até um limite dado. Seu provável criador foi o matemático
grego Eratóstenes, que apresentou o método no século III a.C. Até hoje, este ainda é um dos
algoritmos mais eficientes para se encontrar todos os primos pequenos.

Um número primo é um número natural que possui exatamente dois divisores distintos: 1
e o próprio número. Para encontrar todos os primos menores ou iguais a um dado número N ,
faça:

1. Crie uma lista de números de 2 até N : 2, 3, 4, . . . , N .
2. Comece com `i = 2`, o menor número primo.
3. Marque todos os números na lista que são múltiplos de i.
4. Procure o primeiro número na lista maior que i que ainda não foi marcado. Este é o
próximo primo i. Repita o passo 3. Se não for possı́vel encontrar um novo número, pare.
5. Quando o algoritmo termina, os números que permaneceram não marcados são os primos
entre 2 e N .

### Implementações

Esse projeto inclui três implementações do Crivo de Eratostenes, todas baseadas na estrutura quick-find, porém cada uma trabalha com um tipo de dado diferente no vetor de indexação, sendo eles:

* Array do tipo unsigned int
* Array do tipo char
* Array do tipo int com operações bit-a-bit

### Testes

Esse projeto conta com um código cliente de teste para cada implementaçào, para utilizár-los, utilize o comando `make` com as opções `crivo_int`, `crivo_char` ou `crivo_bit`.
