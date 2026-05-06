int main(void){

    int N, X;
    int soma = 0;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%d", &X);
        soma += X;
    }

    printf("%d\n", soma);

    return 0;
}