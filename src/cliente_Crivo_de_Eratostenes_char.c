#include <stdlib.h>
#include <stdio.h>
#include "../headers/Crivo_de_Eratostenes_marcador_char.h"

int main(int argc, char const *argv[]) {
  unsigned int N = 1;
  printf("Digite o número N para o qual se quer encontrar todos os primos menores ou iguais a N:\n");
  scanf("%d",&N);
  char* lista_numeros = cria_lista(N);
  unsigned int i = 2;
  while (i <= N) {
    marca_multiplos(i, N, lista_numeros);
    if (i == N) {
      break;
    }
    i = proximo_primo_na_lista(i, N, lista_numeros);
  }
  imprime_primos_na_lista(N, lista_numeros);
  free(lista_numeros);
  return 0;
}
