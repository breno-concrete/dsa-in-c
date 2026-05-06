#include <stdlib.h>
#include <stdio.h>

int main (void){
    long long N;
    long long T;

    scanf("%lld", &N); 

    T = ((N + 1) * (N + 2))/2;

    printf("%lld pecas\n", T);

    return 0;

}