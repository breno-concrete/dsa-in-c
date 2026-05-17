#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverte(int *v, int tamanho){
    int *first = v;

    int *last = (v + tamanho - 1);

    while(first < last){
        int tmp =  *first;
        *first = *last;
        *last = tmp;


        first++;
        last--;
    }
}


int main(void) {
    
    return 0;
}