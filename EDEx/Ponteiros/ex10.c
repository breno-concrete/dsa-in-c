#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void intercala(int *v1, int *v2, int *v3, int n){

    for(int i = 0; i < 2 * n; i++){
        if(i % 2 == 0){
            *v3 = *v1;
            v1++;
        } else{
            *v3 = *v2;
            v2++;
        }

        v3++;
    }
}

int main(void) {
    
    
    return 0;
}