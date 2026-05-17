#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int A = 1;

    

    int *p = &A;

    printf("Resultado: %d", *p);

    *p = *p + 5;

    *p = *p * 2;

    printf("Resultado final: %d", *p);

    return 0;
}