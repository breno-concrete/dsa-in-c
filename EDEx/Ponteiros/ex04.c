#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int A, B;

    A = 2;
    B = 3;

    printf("Valores:\n A: %d\n B: %d\n", A, B);

    int *p1 = &A;
    int *p2 = &B;


    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;

    printf("S W A P\n");

    printf("Valores:\n A: %d\n B: %d\n", A, B);

    
    return 0;
}