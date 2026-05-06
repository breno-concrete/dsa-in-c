#include <stdio.h>
#include <string.h>


typedef struct {
    char modelo[50];
    int cavalos;
    float tempo0a100;
} Carro;

void fazerRemap(Carro *ptrCarro, int novosCavalos){
    ptrCarro->cavalos = novosCavalos;
    printf("\n [SISTEMA] Remap concluído! Novos cavalos: %d\n", novosCavalos);
}


int main (){
    Carro meuCarro;

    strcpy(meuCarro.modelo, "Nissan Skyline GT-R R34");
    meuCarro.cavalos = 280;
    meuCarro.tempo0a100 = 5.2;

    printf("Original - Modelo: %s | Cavalos: %d\n | 0-100: %.1fs\n\n", meuCarro.modelo, meuCarro.cavalos, meuCarro.tempo0a100);

    printf("--- PARTE 2: VETOR E STRUCTS E ARITMÉTICA DE PONTEIROS --- \n");

    Carro garagem[2];

    Carro *pGaragem = garagem;

    strcpy(pGaragem->modelo, "Silvia S15");
    pGaragem->cavalos = 250;


    strcpy((pGaragem + 1)->modelo, "Porsche 911 GT3 Touring");
    (pGaragem + 1)->cavalos = 502;

    for(int i = 0;i < 2; i++){
        printf("Vaga %d: %s com %d cv\n", i+1, (pGaragem + i)->modelo, (pGaragem + i)->cavalos);
    }

    return 0;


}