#include "validadorSintaxes/TabelaLiterais.h"


/* Tipo abstratos de dados*/
typedef struct celula {
    char caracter;
    struct celula *proximo;
} celula;

/* inicia uma nova celula e retorna a mesma */
celula * novaCelula(char valor){
	celula *nova = (celula*)malloc(sizeof(celula));
    nova->caracter=valor;
    nova->proximo = NULL;

    return nova;
}

/* insere uma nova celula no começo da lista */
celula * inserirInicio(celula *lista,char valor) {
    celula *nova = novaCelula(valor);
    /* valida se lista vazia */
    if(lista == NULL) { 
        lista = nova;
        return lista;
    } 
    /* caso nao esteja vazia */
    /* inseri no inicio */
    else { 
   	 nova->proximo  = lista;
   	 return nova;
    }

    
}

celula * salvarArquivoEmLista(FILE* arq,celula* lista){
	char c;
	for (;!feof(arq);c=fgetc(arq)){
    	lista = inserirInicio(lista,c);  
  	}
  	return lista;
}

/* funcao recursiva para desenpilhar a pilha e imprimir  a lista */
void printLista(celula *lista){
	if( lista == NULL){
		return;
	}
	else{
		printLista(lista->proximo);
	}
	/* 
	 valida se o caracter está entre 0 e 127, 
	 que coresponde aos numeros deciamis da tabela ASCII
	 */
	isASCII(lista->caracter);
	isParentheses(lista->caracter);

	isMathematicalOperator(lista->caracter);
	isNumber(lista->caracter);
	 isPunctuation(lista->caracter);



	
	
	
}

/*Liberar todas as alocacoes da lista encadeada*/
void liberaMemoriaLista(celula *lista){
	celula *liberar=lista;
	while(lista!=NULL){
		/*recebe a posicao atual da lista*/
		liberar = lista;
		/*lista recebe proxima posicao*/
		lista = lista->proximo;
		/*libera posicao anterior*/
		free(liberar);	
	}
}
