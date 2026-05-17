#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dobra(int *X){
    *X = *X * 2;
}





int main(void) {

    int X = 2;

    printf("X: %d\n", X);

    dobra(&X);

    printf("X: %d\n", X);
    
    return 0;
}