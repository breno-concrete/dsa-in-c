#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int compara(char *s1, char *s2){
    while(*s1 && *s2){
        if(*s1 != *s2){
            return *s1 - *s2;
        }
        s1++;
        s2++;
    }

    return *s1 - *s2;

}

int main(void) {
    
    return 0;
}