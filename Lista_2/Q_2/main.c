#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "arquivo.h"
#define MAX_TAM 500


int main() {
    PILHA* pilha = criar_pilha();
    char frase[MAX_TAM], frase_contr[MAX_TAM];
    int i = 0; 
	int j = 0;
	int t = 0; 
	char letra;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';
    
    for (t = 0; frase[t]; ++t) {
    	frase[t] = tolower(frase[t]);  // tolower faz com q letras maiusculas fiquem minusculas
    }
    removerEspaco(frase);
    printf("%s\n", frase);
    
    for (i = 0; frase[i]; i++) {
       	if (isalpha(frase[i])) 			//a funcao isalpha remove espaços e caracteres não alfabéticos
            inserir_pilha(pilha, frase[i]);   
    }

	mostrar_pilha(pilha);
	
    while (tamanho_da_pilha(pilha) > 0) {
        topo_pilha(pilha, &letra);
        frase_contr[j] = letra;
        j++;
        remover_topo_pilha(pilha);
    }
	
	
    if (comparar_frases(frase, frase_contr)) {
        printf("E um palindromo.\n");
    } else {
        printf("Nao e um palindromo.\n");
    }
    
    printf("Frase ao contrario: %s\n", frase_contr);

    liberar_pilha(pilha);
    
    return 0;
}






