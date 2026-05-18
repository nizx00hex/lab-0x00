#include <stdio.h>
#include <stdint.h>
#include <limits.h>


int main(){

    unsigned int max = ~0;  // flip all bits to 1
    int i = -1;
    
    printf("\n---------------------------------\n");
    printf("we can also print unsigned int (-1): %u\n", i);
    printf("Size of uint8_t: %lu\n", sizeof(uint8_t));
    printf("Size of unsigned int: %lu\n", sizeof(unsigned int));
    printf("Size of int: %lu\n", sizeof(int));
    printf("---------------------------------\n");
    printf("Unsigned int min: %u\n", 0);
    printf("Unsigned int max: %u\n", UINT_MAX);
    printf("---------------------------------\n");
    printf("Max unsigned int: %u\n", max);
    printf("---------------------------------\n");
    for(int j= 1; j < 256; j++){
         uint8_t i = j;
            printf("Printing all unsigned int: %p\n", i);
    }
    return 0;
}


