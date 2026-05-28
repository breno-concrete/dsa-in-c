#include <stdio.h>
#include <stdlib.h>
#include <string.h>





// int main(void) {

//     int vetor[10] ={0};

//     for(int i = 0; i<10; i++){
//         printf("%d", vetor[i]);
//     }





//     //B)
//     int matriz[3][3] = {{0}};
    
//     for(int i = 0; i<3; i++){
//         matriz[i][i] = 1;
//     }


//     // 2

//     //A)

//     //struct em anexo:
//     //=====================

//     typedef struct{
//         char nome[50];
//         float preco;
//         int quantidade;
//     } Produto;

//     // ====================

//     Produto p1;

//     Produto p1 = {"Bone", 13.50, 40};


//     // B)

//     printf("%s - %f - %d", p1.nome, p1.preco, p1.quantidade);
//     return 0;

//     Produto *ptr = &p1;

//     printf("%s - %f", ptr->nome, ptr->preco);

//     //C)
//     // Não há diferença, ambos executam a mesma função.


//     //4



#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    float preco;
    int quantidade;
} Produto;

int main() {
    int n, i;

    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", &n);

    Produto *vetor = malloc(n * sizeof(Produto));

    for(int i = 0; i < n; i++){
        char a[50];
        float b;
        int c;

        printf("Nome:");
        scanf("%s", &a);

        printf("Preço:");
        scanf("%f", &b);

        printf("Quantidade:");
        scanf("%f", &c);

        vetor[i].nome = a;
        *vetor->preco = b;
        *vetor->quantidade = c;
        

    }
}

