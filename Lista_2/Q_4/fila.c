#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "fila.h"
#define MAX 100

FILA* criar_fila(){
	FILA* fila = (FILA*)malloc(sizeof(FILA));
	fila->inicio = 0;
	fila->final = 0;
	fila->res = 0;
	return fila;
}


void inserir_na_fila(FILA* fila,char* valor){
	fila->vet[fila->final] = valor;
	fila->final++;
}


char* remover_fila(FILA* fila){
    char *retornado = fila->vet[fila->inicio];
    fila->inicio++;
    return retornado;
}



bool operador(char *item){
	switch (*item)
    {
    case '+':
        return true;
        break;

    case '-':
        return true;
        break;

    case '*':
        return true;
        break;

    case '/':
        return true;
        break;

    default:
        return false;
        break;
    }
}

int calcular(char op,int num1, int num2 ){
	switch (op)
    {
    case '+':
        return num1 + num2;
        break;

    case '-':
        return num1 - num2;
        break;

    case '*':
        return num1 * num2;
        break;

    case '/':
        return num1 / num2;
        break;

    default:
        return 0;
        break;
    }
}


void prefixa(FILA* fila){
    int doisSeguidos = 0;
    char *opRemovido = NULL , *num1Removido= NULL , *num2Removido = NULL;
    bool temOperador = false, aplicou = false;

   for(fila->inicio; fila->inicio <= fila->final && fila->final < MAX; fila->inicio){
   	
    if(operador(fila->vet[fila->inicio])){
     if(temOperador){
        inserir_na_fila(fila, opRemovido);
        }
    if(num1Removido){
        inserir_na_fila(fila,num1Removido);
        num1Removido = NULL;
     }
     
     opRemovido = remover_fila(fila);
     temOperador = true;
     aplicou = false;
     doisSeguidos =  0;  
	    
    }
     else{
        if(doisSeguidos ==  0 && temOperador){
            num1Removido = remover_fila(fila);
            doisSeguidos++;
            
        }else if(doisSeguidos == 1 && temOperador){
        	
            num2Removido = remover_fila(fila);
            fila->res = calcular(*opRemovido, atoi(num1Removido), atoi(num2Removido));
            char *Resultado = malloc(sizeof(char)*50);
            sprintf(Resultado, "%d", fila->res);
            inserir_na_fila(fila, Resultado);
            temOperador = false;
            aplicou = true;
            doisSeguidos = 0;
            num1Removido = NULL;
            num2Removido = NULL;        
        }else{
        	
            if(aplicou){
            num1Removido = remover_fila(fila);
            inserir_na_fila(fila, num1Removido);
            
            }
        }
    }
   }
}


void mostrar_fila(FILA* fila) {
	int i;
    printf("Fila: ");
    for(i = fila->inicio; i < fila->final; i++) {
        printf("| %s |", fila->vet[i]);
    }
    printf("\n");
}

