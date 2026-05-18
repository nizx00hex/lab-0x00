#include <stdio.h>
#include <string.h>

int main(){
    char *ptr = "Hello, World!";
    printf("The string is: %s\n", ptr);
    // printf("The first character is: %c, address is (%p)\n", *ptr, ptr);
    // printf("The second character is: %c, address is (%p)\n", *(ptr + 1), (ptr + 1));
    // printf("The third character is: %c, address is (%p)\n", *(ptr + 2), (ptr + 2));
    // printf("The fourth character is: %c, address is (%p)\n", *(ptr + 3), (ptr + 3));
    // printf("The fifth character is: %c, address is (%p)\n", *(ptr + 4), (ptr + 4));
    // printf("The sixth character is: %c, address is (%p)\n", *(ptr + 5), (ptr + 5));
    // printf("The seventh character is: %c, address is (%p)\n", *(ptr + 6), (ptr + 6));
    // printf("The eighth character is: %c, address is (%p)\n", *(ptr + 7), (ptr + 7));
    // printf("The ninth character is: %c, address is (%p)\n", *(ptr + 8), (ptr + 8));
    // printf("The tenth character is: %c, address is (%p)\n", *(ptr + 9), (ptr + 9));
    // printf("The eleventh character is: %c, address is (%p)\n", *(ptr + 10), (ptr + 10));
    // printf("The twelfth character is: %c, address is (%p)\n", *(ptr + 11), (ptr + 11));
    // printf("The thirteenth character is: %c, address is (%p)\n", *(ptr + 12), (ptr + 12));
 
    for(int i = 0; i < strlen(ptr); i++){
        printf("The %dth character is: %c, address is (%p)\n", i, *(ptr + i), (ptr + i));
    }

    for(int i = 0; i < strlen(ptr); i++){
        printf("%c - %p\n", ptr[i], &(ptr[i]));
    }

     return 0;
}