#include "../validadorArrays/validadorTamanho.h"

int isMathematicalOperator(char character){
    /*
    esta função valida se um char é do tipo operador matemático
   */
    int aux = 0;

  /* decimais da tabela ASCII   */
    int sum = 43; 
    int multiplication = 42; 
    int subtraction = 45;
    int division = 47;
    int exponentiation = 94;  
    int remainderDivision = 37; 
    
    /* lista contendo todas as validacoe possiveis */
    int validationsList[] = {sum,
        multiplication,
        subtraction,
        division,
        exponentiation,
        remainderDivision};
 
    /*tamanho do vetor*/
    int len = sizeof(validationsList)/sizeof(validationsList[0]);

    for(aux = 0;aux < len ;aux++){
        if(character == validationsList[aux]){
            printf("operador matematico encontrado ==>[ %c ] valor ASCII[ %i ]   \n",validationsList[aux],validationsList[aux]);
            return 1;
        }
        
    }
     return 0;

}

int isLogicalOperator(char  character[]){
    /*
    esta função valida se um char é do tipo operador lógicos  */
    int aux = 0;
    char equal[] = "=";
    char different[] = "<>";
    char less[] = "<";
    char lessThanOrEqual[] = "<=";
    char greater[] = ">";
    char greaterThanOrEqual[] =">=";
    char no[] = "!";
    char notEqual[] ="!=";
    
    /* lista contendo todas as validacoe possiveis */
    char *validationsList[] = {equal,
        different,
        less,
        lessThanOrEqual,
        greater,
        greaterThanOrEqual,
        no,
        notEqual};
 
     int len = sizeof(validationsList)/sizeof(validationsList[0]);

    for(aux = 0;aux < len ;aux++){
       if(!strcmp(character, validationsList[aux])){
           printf("operador logico encontrado ==>[ %s ]  \n",validationsList[aux]);
           return 1;
       }
        
    }
     return 0;

}

int isNumber(char  character){
    /*
   esta função valida se uma cadeia de char(String) ou apenas um char é do tipo numerico   */
    int aux = 0;
 
       /* numeros da tabela ascii para tipp numerico
        */
       if(character >=48 && character <= 57 ){
            printf("operador numerico encontrado ==>[ %c ] valor ASCII[ %i ]   \n",character,character);            
       }else{
           return 0;
       }
      
     return 1;

}

int isPunctuation(char  character){
    /*
    esta função valida se um char é do tipo pontuacao
   */
    int aux = 0;
  

     int ponto = 46;
     int pontoVirgula = 59;
     int doisPonto = 58;
     int interrogacao = 63;
     int exclamacao = 33;

    /* lista contendo todas as validacoe possiveis */
    int validationsList[] = {ponto,
        pontoVirgula,
        doisPonto,
		interrogacao,
		exclamacao
		};
 
  /*  tamanho do vetor de validacao */
   int lenValidationsList = sizeof(validationsList)/sizeof(validationsList[0]);



    /* for para compara se a string tem um cacter de pontuacao*/
    for(aux = 0;aux < lenValidationsList ;aux++){
        if(character == validationsList[aux]){             
             printf("operador pontuacao encontrado ==>[ %c ] valor ASCII[ %i ]   \n",validationsList[aux],validationsList[aux]);          
            return 1;
        }
    }
    
     return 0;

}

int isParentheses(char  character){
    /*
    esta função valida se um char é do tipo parenteseador   */
    int aux = 0;
  

     int abreColchetes = 91;
     int fechaColchetes = 93;
     int abreParentese = 40;
     int fechaParentese = 41;
     int abreChaves = 123;
     int fechaChaves = 125;
    /* lista contendo todas as validacoe possiveis */
    int validationsList[] = {abreColchetes,
      fechaColchetes,
      abreParentese,
      fechaParentese ,
      abreChaves,
      fechaChaves,};
 
  /*  tamanho do vetor de validacao */
   int lenValidationsList = sizeof(validationsList)/sizeof(validationsList[0]);



    /* for  para compara se a string tem um cacter de parenteseador*/
    for(aux = 0;aux < lenValidationsList ;aux++){
        if(character == validationsList[aux]){   
            printf("operador parenteses encontrado ==>[ %c ] valor ASCII[ %i ]   \n",validationsList[aux],validationsList[aux]);          
            return 1;
        }
    }
    
     return 0;

}

int isASCII(char  character){
    if(character >= 0 && character<=127  ){
        printf("ASCII valido encontrado ==>[ %c ] valor ASCII[ %i ]   \n",character,character);   
        return 1;       
	}else{
	    printf("ASCII INVALIDO encontrado ==>[ %c ] valor ASCII[ %i ]   \n",character,character);      
        return 0;
	}
}
