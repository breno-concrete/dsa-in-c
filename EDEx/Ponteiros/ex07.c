#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int maior(int *v, int tamanho){

    int *maior = v;

    for(int i = 0; i < tamanho; i++){
        if(*(v + i) >= *maior){
            maior = (v + i);
        }

    }

    return *maior;

}
int main(void) {

    int vetor[] = {3, 7, 2, 9, 5};
    int tamanho = 5;

    int resultado = maior(vetor, tamanho);

    printf("Maior valor: %d\n", resultado);

    return 0;
}