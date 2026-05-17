#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int a = 1;
    float b = 3.14;


    int *p1 = &a;
    float *p2 = &b;

    printf("a: %d\n b: %f", *p1, *p2);

    return 0;
}
