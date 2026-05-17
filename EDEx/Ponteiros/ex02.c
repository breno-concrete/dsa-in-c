#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int A = 10; 
    int B = 20;
    int *p1, *p2; // 2 ponteiros de inteiros (duas setas que apontam pro valor)


    p1 = &A; //o endereço p1 é igual ao endereço de A
    p2 = &B; //o endereço de p2 é igual ao endereço de B

    printf("Antes: *p1 = %d *p2 = %d\n", *p1, *p2); // Resultado antes

    int *tmp = p1; // ponteiro temporário (a seta ta apontando pro endereço de A)
    p1 = &B; // valor do endreço de p1 é o de B
    p2 = tmp; // endereço de p2 é igual a endereço de tmp (logo o valor antigo de A)

    printf("Depois: *p1 = %d, *p2 = %d\n", *p1, *p2);

    return 0;
}