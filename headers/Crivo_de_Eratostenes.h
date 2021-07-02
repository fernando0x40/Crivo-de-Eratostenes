#ifndef CRIVO_DE_ERASTOTENES
#define CRIVO_DE_ERASTOTENES

unsigned int* cria_lista(unsigned int final);
void marca_multiplos(unsigned int numero, unsigned int final, unsigned int* lista);
unsigned int proximo_primo_na_lista(unsigned int primo_atual, unsigned int final, unsigned int* lista);
void imprime_primos_na_lista(unsigned int final, unsigned int* lista);

#endif /* CRIVO_DE_ERASTOTENES */
