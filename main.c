#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "asciiLista.h"
#include <locale.h>

/*
Pedro Gabriel de Mello Más e Michael Mendes Mendonça

valida se o arquivo foi realmente aberto
*/
void isFileOpen(FILE* arq){
	if (arq == NULL)  
  {
     printf("Problemas na abertura do arquivo\n");
     exit(0);
  }
}


void main()
{	
  celula *lista = NULL;
  FILE *arq;

  /*abre aquivo para leitura*/	
  arq = fopen("um_texto_qualquer.txt", "rt");
  /*valida se foi aberto*/
  isFileOpen(arq);
  /*carrega os arquivos lidos em uma lista encadeada*/
  lista =  salvarArquivoEmLista(arq,lista);
  /*imprime a lista na tela*/
  
  printLista(lista);
  
  /*liberar memoria*/
  liberaMemoriaLista(lista);
  /*fecha arquivo*/
  fclose(arq);



}

