#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main() {
    PILHA* pilha = criar_pilha();

    inserir_na_pilha(pilha, "ola");   
    inserir_na_pilha(pilha, "oi");
    inserir_na_pilha(pilha, "hi");
   
	
	mostrar_pilha(pilha);
	
    if (pilha_vazia(pilha)) {
        printf("A pilha esta vazia.\n");
    } else {
        printf("A pilha nao esta vazia.\n");
    }

    printf("Tamanho da pilha: %d\n", tamanho_pilha(pilha));

    void* item;
    if (topo_pilha(pilha, &item)) {
        printf("Elemento do topo: %s\n", item);
    } else {
        printf("Pilha vazia.\n");
    }

    remover_da_pilha(pilha);
    printf("\n");
    printf("----------------------------\n");
    printf("Removendo o elemento do topo \n");
    printf("----------------------------\n");
	mostrar_pilha(pilha);
	
	
    liberar_pilha(pilha);

    return 0;
}

