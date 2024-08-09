#ifndef pilha_h
#define pilha_h

typedef struct NO {
    void* valor;
    struct NO* prox;
} NO;

typedef NO* PILHA;

PILHA* criar_pilha();
int inserir_na_pilha(PILHA* pilha, void* item);
int remover_da_pilha(PILHA* pilha);
int topo_pilha(PILHA* pilha, void** item);
int tamanho_pilha(PILHA* pilha);
int pilha_vazia(PILHA* pilha);
int pilha_cheia(PILHA* pilha); 
void liberar_pilha(PILHA* pilha);
void mostrar_pilha(PILHA* pilha);
  
#endif 
