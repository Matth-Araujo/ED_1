#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "arquivo.h"


PILHA* criar_pilha(){
	PILHA* pilha;
	pilha= (PILHA*)malloc(sizeof(PILHA));
	if (pilha!= NULL)
		pilha -> cont = 0;
	return pilha;
}

int tamanho_da_pilha(PILHA* pilha){
	if(pilha == NULL)
		return -1;
		else 
			return pilha->cont;
}

int inserir_pilha(PILHA* pilha,char item){
	if(pilha == NULL)
		return 0;
	if(pilha->cont == MAX )
		return 0;
	pilha->vet[pilha->cont] = item;
	pilha->cont++;
	return 1;
}

int remover_topo_pilha(PILHA* pilha){
	if (pilha == NULL || pilha-> cont ==0)
		return 0;
	pilha->cont --;
	return 1;
}

int topo_pilha(PILHA* pilha, char* item) {
    if (pilha == NULL || pilha->cont == 0)
        return 0;
    *item = pilha->vet[pilha->cont - 1];
    return 1;
}

void liberar_pilha(PILHA* pilha) {
    free(pilha);
}

int comparar_frases(const char* frase, const char* frase_contr) {
	int i = 0;
    
    if (strlen(frase) != strlen(frase_contr)) {				 // verificando se os tamanhos das frases sao iguais
        return 0; 
    }

    
    for (i = 0 ; i < strlen(frase); i++) {			// comparando os elementos correspondentes nas frases
        if (frase[i] != frase_contr[i]) {
            return 0; 
        }
    }

    return 1; 
}

void removerEspaco(char *frase) {
	
    int j = 0;
    int i;
    for ( i = 0; frase[i]; i++) {
        if (isalpha(frase[i])) {
            frase[j] = frase[i];
            j++;
        }
    }
    frase[j] = '\0'; // Coloca o null no fim para finalizar a frase
}

void mostrar_pilha(PILHA* pilha) {
	int i ;
    if (pilha == NULL) {
        printf("Pilha não inicializada.\n");
        return;
    }

    if (pilha->cont == 0) {
        printf("Pilha vazia.\n");
        return;
    }

    printf("Pilha:\n");
    for (i = pilha->cont - 1; i >= 0; i--) {
        printf("| %c |\n", pilha->vet[i]);
        printf("------\n");
    }
}
