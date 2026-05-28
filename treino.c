#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1
typedef struct{
    char nome[10];
    int idade;
    float nota;
} Aluno;

Aluno a1;
strcpy(a1.nome, "Breno");
a1.idade = 10;
a1.nota = 9.0;

Aluno *ptr = &a1;

ptr->nome = "eu";

// 2
int main(void) {
   
    return 0;
}

