#define MAX 100

typedef struct{
	int vet[MAX];
	int cont;
}PILHA;

PILHA* criar_pilha();

void liberar_pilha(PILHA* pilha);

int topo_pilha(PILHA* pilha,int* item);

int inserir_pilha(PILHA* pilha,int item);

int remover_da_pilha(PILHA* pilha);

int tamanho_da_pilha(PILHA* pilha);

int pilha_vazia(PILHA* pilha);

int pilha_cheia(PILHA* pilha);

void mostrar_pilha(PILHA* pilha);
