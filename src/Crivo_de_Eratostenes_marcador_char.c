#include <stdio.h>
#include <stdlib.h>
#include "../headers/Crivo_de_Eratostenes_marcador_char.h"

#define MARCADO 'm'
#define DESMARCADO 'd'

char* cria_lista(unsigned int final){
  char* lista_numeros = (char*)malloc(sizeof(char)*(final-1)); //lista de 2 a N
  for (unsigned int indice = 0; indice < final-1; indice++) {
    lista_numeros[indice] = DESMARCADO;
  }
  return lista_numeros;
}

void marca_multiplos(unsigned int numero, unsigned int final, char* lista){
  for (unsigned int numero_da_lista = numero+1; numero_da_lista <= final+1; numero_da_lista++) {
    if (numero_da_lista % numero == 0 ) {
      lista[numero_da_lista-2] = MARCADO;
    }
  }
}

unsigned int proximo_primo_na_lista(unsigned int primo_atual, unsigned int final, char* lista){
  for (unsigned int prox_primo = primo_atual+1; prox_primo <= final; prox_primo++) {
    if (lista[prox_primo-2] == DESMARCADO) {
      return prox_primo;
    }
  }
  return final;
}

void imprime_primos_na_lista(unsigned int final, char* lista){
  printf("Primos menores ou iguais a %u:\n", final);
  for (unsigned int i = 0; i < final-1; i++) {
    if (lista[i] == DESMARCADO) {
      printf("%d ",i+2);
    }
  }
  printf("\n");
}
