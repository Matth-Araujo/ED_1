#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"


PILHA* criar_pilha(){
    PILHA* pilha = (PILHA*)malloc(sizeof(PILHA));
    if(pilha != NULL)
        *pilha = NULL;
    return pilha;
}

int inserir_na_pilha(PILHA* pilha, void* item){
    if(pilha == NULL)
        return 0;
    NO* no = (NO*)malloc(sizeof(NO));
    if(no == NULL)
        return 0;
    no->valor = item;
    no->prox = (*pilha);
    *pilha = no;
    return 1;
}

int remover_da_pilha(PILHA* pilha){
    if(pilha == NULL)
        return 0;
    if((*pilha) == NULL)
        return 0;
    NO* no = *pilha;
    *pilha = no->prox;
    free(no);
    return 1;
}

int topo_pilha(PILHA* pilha, void** item){
    if(pilha == NULL)
        return 0;
    if((*pilha) == NULL)
        return 0;
    *item = (*pilha)->valor;
    return 1;
}

int tamanho_pilha(PILHA* pilha){
    int contador = 0;
    if(pilha == NULL)
        return contador;
    NO* no = *pilha;
    while(no != NULL){
        contador++;
        no = no->prox;
    }
    return contador;
}

int pilha_vazia(PILHA* pilha){
    if(pilha == NULL)
        return 1;
    if(*pilha == NULL)
        return 1;
    return 0;
}

int pilha_cheia(PILHA* pilha){
    return 0; // A pilha nunca está cheia
}

void mostrar_pilha(PILHA* pilha) {
    if (pilha == NULL || *pilha == NULL) {
        printf("Pilha vazia.\n");
        return;
    }

    NO* no = *pilha;
    printf("Elementos da pilha:\n");
    while (no != NULL) {
        printf("| %s |\n",no->valor);
        printf("------\n");
        no = no->prox;
    }
    printf("\n");
}


void liberar_pilha(PILHA* pilha){
    if(pilha != NULL){
        NO* no;
        while ((*pilha) != NULL){
            no = *pilha;
            *pilha = (*pilha)->prox;
            free(no);
        }
        free(pilha);
    }
}
