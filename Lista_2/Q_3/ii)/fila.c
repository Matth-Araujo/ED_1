#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

FILA* criar_fila(){
	FILA* fila = (FILA*)malloc(sizeof(FILA));
	if (fila != NULL){
		fila->inicio = NULL;
		fila->final = NULL;
		fila->cont = 0;
	}
	return fila;
}

void liberar_fila(FILA* fila){
	if(fila != NULL){
		NO* no;
		while(fila->inicio != NULL){
			no = fila->inicio;
			fila->inicio = fila->inicio->prox;
			free(no);
		}
		free(fila);
	}
}

int inserir_na_fila(FILA* fila,int valor){
	if(fila == NULL)
		return 0;
	NO* no = (NO*)malloc(sizeof(NO));
	if(no == NULL)
		return 0;
		
		
	no->dado = valor;
	no->prox = NULL;
	if(fila->final == NULL)  
		fila->inicio = no;
	else
		fila->final->prox = no;
		
		
	fila->final = no;
	fila->cont++;
	return 1;
}


int remover_fila(FILA* fila){
	if(fila == NULL)
		return 0;
	if(fila->inicio == NULL)
		return 0;
	
	NO* no = fila->inicio;
	fila->inicio = fila->inicio->prox;
	free(no);
	if(fila->inicio == NULL)
		fila->final = NULL;
	fila->cont--;
	return 1;
}

int consultar_fila(FILA* fila,int* valor){
	if(fila == NULL)
		return 0;
	if(fila->inicio == NULL)
		return 0;
	*valor = fila->inicio->dado;
	return 1;
}

int tamanho_fila(FILA* fila){
	if (fila == NULL)
		return 0;
	return fila->cont;
}

int fila_vazia(FILA* fila){
	if(fila == NULL)
		return -1;
	if(fila->inicio == NULL)
		return 1;
	return 0;
}

void mostrar_fila(FILA* fila) {
    if(fila == NULL || fila->inicio == NULL) {
        printf("Fila vazia ou não existe.\n");
        return;
    }

    NO* temp = fila->inicio;
    printf("Fila: ");
    while(temp != NULL) {
        printf("| %d | ", temp->dado);
        temp = temp->prox;
    }
    printf("\n");
}



