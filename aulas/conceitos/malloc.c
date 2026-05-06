#include <stdio.h>
#include <stdlib.h>




int main (void){
    int n;

    printf("Digite o tamanho:");
    scanf("%d", &n);

    int *v = malloc(n * sizeof(int));

    if(v == NULL){
        printf("Erro ao alocar memória\n");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    printf("\nValores\n");

    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }



    free(v);
    return 0;
}