#include <stdio.h>
#include <stdlib.h>
#include "Crivo_de_Eratostenes_marcador_bit.h"

#define MARCADO 'm'
#define DESMARCADO 'd'
#define INT_SIZE 32

#define SetBit(A,k) ( A[(k/32)] |= (1 << (k%32)) )
#define ClearBit(A,k) ( A[(k/32)] &= ~(1 << (k%32)) )
#define TestBit(A,k) ( A[(k/32)] & (1 << (k%32)) )

int calculo_tamanho_em_bytes(int numero);

int* cria_lista(int final){
  //printf("tamanho do array em bytes: %d\n", calculo_tamanho_em_bytes(final-1));
  int* lista_numeros = (int*)malloc(sizeof(int)*(calculo_tamanho_em_bytes(final-1))); //lista de 2 a N
  for (int indice = 0; indice < calculo_tamanho_em_bytes(final-1); indice++) {
    lista_numeros[indice] = 0;
    // printf("indice = %d\n", indice);
  }
  return lista_numeros;
}

void marca_multiplos(int numero, int final, int* lista){
  for (int numero_da_lista = numero+1; numero_da_lista <= final; numero_da_lista++) {
    if (numero_da_lista % numero == 0 ) {
      // printf("marcou %d multiplo de %d\n", numero_da_lista, numero);
      SetBit(lista, (numero_da_lista-2));
    }
  }
}

int proximo_primo_na_lista(int primo_atual, int final, int* lista){
  for (int prox_primo = primo_atual+1; prox_primo <= final; prox_primo++) {
    //printf("verificando se %d é primo ...\n", prox_primo);
    if (!TestBit(lista, (prox_primo-2))) {
      // printf("prox primo: %d\n", prox_primo);
      return prox_primo;
    }
  }
  return final;
}

void imprime_primos_na_lista(int final, int* lista){
  printf("Primos menores ou iguais a %u:\n", final);
  for (int i = 2; i <= final; i++) {
    if (!TestBit(lista, (i-2))) {
      printf("%d ",i);
    }
  }
  printf("\n");
}

/*  PRIVATE  */

int calculo_tamanho_em_bytes(int numero){
  int qntBytes = 0;
  qntBytes += numero / INT_SIZE;
  if (numero % INT_SIZE) {
    qntBytes++;
  }
  return qntBytes;
}
