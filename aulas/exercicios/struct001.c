#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char nome[50];
    int idade;
    float nota;
} Aluno;




int main(void) {

    Aluno a1;

    char a[50];
    int b;
    float c;

    scanf("%s", a);
    scanf("%d", &b);
    scanf("%f", &c);

   strcpy(a1.nome, a);
   a1.idade = b;
   a1.nota = c;

   printf("Aluno: %s\nIdade: %d\nNota: %f\n", a1.nome, a1.idade, a1.nota);

    return 0;
}