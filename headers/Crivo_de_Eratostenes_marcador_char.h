#ifndef CRIVO_DE_ERASTOTENES_MARCADOR_CHAR
#define CRIVO_DE_ERASTOTENES_MARCADOR_CHAR

char* cria_lista(unsigned int final);
void marca_multiplos(unsigned int numero, unsigned int final, char* lista);
unsigned int proximo_primo_na_lista(unsigned int primo_atual, unsigned int final, char* lista);
void imprime_primos_na_lista(unsigned int final, char* lista);

#endif /* CRIVO_DE_ERASTOTENES_MARCADOR_CHAR */
