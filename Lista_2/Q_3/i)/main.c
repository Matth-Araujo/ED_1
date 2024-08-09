#include <stdio.h>
#include <stdlib.h>
#include "fila.h"


int main() {
	
	struct FILA fila;
	inicializar_fila(&fila);
	enfileirar(&fila,1);
	enfileirar(&fila,2);
	enfileirar(&fila,3);
	enfileirar(&fila,4);
	
	printf("\nTamanho da fila %d", tamanho(&fila));
	printf("\nProximo numero da fila: %d", inicio(&fila));
	printf("\nTirando da fila: %d", desenfileirar(&fila));
	printf("\nTirando da fila: %d", desenfileirar(&fila));
	printf("\nTirando da fila: %d", desenfileirar(&fila));
	printf("\nProximo da fila: %d", inicio(&fila));
	printf("\nTirando da fila: %d", desenfileirar(&fila));
	printf("\nTamanho da fila: %d", tamanho(&fila));	

	
	return 0;
}
