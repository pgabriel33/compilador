
int vecCharLen(char *vec){
    /*
    calcula tamanho do ponteiro em char.
    */
    char c = -1;
    while(*(vec++))
        c++;
    return c;
}

int matrixCharLen(char **vec){
    /*
    conta o tamanho do valor próximo do ponteiro em char    */
    char c = -1;
    while(*(vec++)){
        c++;
    }
        
    return c;
}
int vectIntLen(int *vec){
    /*
  conta o tamanho do ponteiro em int
    */
    char c = -1;
    while(*(vec++))
        c++;
    return c;
}

