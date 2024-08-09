typedef struct NO{
	int dado;
	struct NO* prox;
}NO;

typedef struct FILA{
	NO* inicio;
	NO* final;
	int cont;
}FILA;

FILA* criar_fila();
int inserir_na_fila(FILA* fila,int valor);
int consultar_fila(FILA* fila,int* valor);
int remover_fila(FILA* fila);
int tamanho_fila(FILA* fila);
int fila_vazia(FILA* fila);
int fila_cheia(FILA* fila);
void liberar_fila(FILA* fila);
void mostrar_fila(FILA* fila);



