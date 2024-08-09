#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
#define MAX 9
int inicializar_fila(struct FILA* pfila){
	pfila->inicio = -1;
	pfila->final = -1;	
	return 0;
}

int fila_vazia(struct FILA* pfila ){
	if(pfila->inicio == pfila->final)
		return 1;
		
	return 0;
}

void enfileirar(struct FILA* pfila,int num){
	if(pfila->final == MAX - 1){
		
		pfila->final = 0;
	}
		else
			pfila->final++;
	
	if(pfila->final == pfila->inicio){

		printf("\n Estouro na fila");
		exit(1);
	}
	
	pfila->item[pfila->final] = num;
	return ;	
}

int tamanho(struct FILA* pfila){
	if(pfila->inicio <= pfila->final)
		return pfila->final - pfila->inicio;
		
	return pfila->final + pfila->inicio;	
}

int inicio(struct FILA* pfila){
	return pfila->item[pfila->inicio + 1];
}

int desenfileirar(struct FILA* pfila){
	
	if(fila_vazia(pfila)){
		printf("\n Fila vazia");
		exit(1);
	}
	
	if(pfila->inicio == MAX - 1){
		pfila->inicio = 0;
	}
		else{
			pfila->inicio++;
		}
	return(pfila->item[pfila->inicio]);
}



