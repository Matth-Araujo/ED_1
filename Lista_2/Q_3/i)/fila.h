#define MAX 9

struct FILA{
	int item[MAX];
	int inicio,final;
};
int inicilizar_fila(struct FILA* pfila);

int fila_vazia(struct FILA* pfila);

void enfileirar(struct FILA* pfila,int num);

int tamanho(struct FILA* pfila);

int inicio(struct FILA* pfila);

int desenfileirar(struct FILA* pfila);


