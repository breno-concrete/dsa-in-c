#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    
    int x = 10;

    int *p = &x;

    printf("X: %d\n", x);
    printf("&X: %p\n", &x);
    printf("p: %p\n", p);
    printf("*p: %d\n", *p);

    *p = 50;

    printf("Novo *p: %d\n", *p);
    
    return 0;
}