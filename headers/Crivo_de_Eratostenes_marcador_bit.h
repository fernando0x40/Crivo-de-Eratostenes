#ifndef CRIVO_DE_ERASTOTENES_MARCADOR_BIT
#define CRIVO_DE_ERASTOTENES_MARCADOR_BIT

int* cria_lista(int final);
void marca_multiplos(int numero, int final, int* lista);
int proximo_primo_na_lista(int primo_atual, int final, int* lista);
void imprime_primos_na_lista(int final, int* lista);

#endif /* CRIVO_DE_ERASTOTENES_MARCADOR_BIT */
