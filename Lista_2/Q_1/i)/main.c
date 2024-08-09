#include <stdio.h>
#include <stdlib.h>
#include "pilha.h" 

int main() {
    PILHA* pilha = criar_pilha(); 

    inserir_pilha(pilha, 10);
    inserir_pilha(pilha, 9);
    inserir_pilha(pilha, 8);
    inserir_pilha(pilha, 7);
    inserir_pilha(pilha, 6);
    inserir_pilha(pilha, 5);
    
   	if (pilha_vazia(pilha)) {
        printf("A pilha esta vazia.\n");
    } else {
        printf("A pilha nao esta vazia.\n");
    } 
    

    printf("Tamanho da pilha: %d\n", tamanho_da_pilha(pilha));
    
    mostrar_pilha(pilha);
    
    int item;
    if (topo_pilha(pilha, &item)) {
        printf("Elemento do topo: %d\n", item);
    } else {
        printf("Pilha vazia.\n");
    }

    remover_da_pilha(pilha);
    printf("\n\n");
    printf("Removendo o elemento do topo: \n");
    
    mostrar_pilha(pilha);

    liberar_pilha(pilha);

    return 0;
}

