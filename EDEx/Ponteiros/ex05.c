#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int *p = arr;

    for(int i = 0; i < 10; i++){
        printf("%d\n", *(p + i));
    }


    return 0;
}