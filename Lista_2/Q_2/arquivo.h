#define MAX 100

typedef struct{
	int vet[MAX];
	int cont;
}PILHA;

PILHA* criar_pilha();

int tamanho_da_pilha(PILHA* pilha);

int inserir_pilha(PILHA* pilha,char item);

int remover_topo_pilha(PILHA* pilha);

int topo_pilha(PILHA* pilha, char* item);

void liberar_pilha(PILHA* pilha);

int comparar_frases(const char* frase, const char* frase_contr);

void removerEspaco(char* frase);

void mostrar_pilha(PILHA* pilha);
