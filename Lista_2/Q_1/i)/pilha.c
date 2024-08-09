#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

PILHA* criar_pilha(){
	PILHA* pilha;
	pilha= (PILHA*)malloc(sizeof(PILHA));
	if (pilha!= NULL)
		pilha -> cont = 0;
	return pilha;
}

int tamanho_da_pilha(PILHA* pilha){
	if(pilha == NULL)
		return -1;
		else 
			return pilha->cont;
}

int inserir_pilha(PILHA* pilha,int item){
	if(pilha == NULL)
		return 0;
	if(pilha->cont == MAX )
		return 0;
	pilha->vet[pilha->cont] = item;
	pilha->cont++;
	return 1;
}

int remover_da_pilha(PILHA* pilha){
	if (pilha == NULL || pilha-> cont ==0)
		return 0;
	pilha->cont --;
	return 1;
}

int topo_pilha(PILHA* pilha, int* item) {
    if (pilha == NULL || pilha->cont == 0)
        return 0;
    *item = pilha->vet[pilha->cont - 1];
    return 1;
}


int pilha_cheia(PILHA* pilha){
	if(pilha == NULL)
	 return -1;
	return(pilha->cont == MAX);	
}

int pilha_vazia(PILHA* pilha){
	if(pilha == NULL)
		return -1;
	return(pilha->cont == 0);
}

void liberar_pilha(PILHA* pilha){
	free(pilha);
}

void mostrar_pilha(PILHA* pilha) {
	int i ;
    if (pilha == NULL) {
        printf("Pilha não inicializada.\n");
        return;
    }

    if (pilha->cont == 0) {
        printf("Pilha vazia.\n");
        return;
    }

    printf("Pilha:\n");
    for (i = pilha->cont - 1; i >= 0; i--) {
        printf("| %d |\n", pilha->vet[i]);
        printf("------\n");
    }
}
