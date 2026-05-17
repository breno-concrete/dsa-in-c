#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int contador(char *str, char c){

    int many = 0;

    while (*str != "\0")
    {
       if(*str = c){
        many++;
       }

       str++;

    }
    
    return many;
}

int main(void) {    
    
    char palavra[] = "banana";

    int resultado = contador(palavra, 'a');

    printf("Quantidade: %d\n", resultado);

    return 0;
}