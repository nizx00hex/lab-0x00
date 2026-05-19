#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char arr[100] = "Hello, World!";
    char *ptr1; 
    char *ptr2;

    ptr1 = arr;
    strcpy(ptr1, "cat hello.txt");
    system(ptr1);
    

    strcpy(ptr1, "Hello, World");
    
    printf("%s\n", ptr1); 
    ptr2 = ptr1 + 2;
    printf("%s\n", ptr2); 
    // *ptr2 = 4;
    // printf("%p\n", ptr2);
    
    strcpy(ptr2, "y, Nisath!");
    *ptr2 = 'R';
    *ptr1 = 'T';
    printf("%s\n", ptr2);
    printf("%s\n", ptr1);
    // char *ptr2 = ptr + 3;  
    // *ptr2 = 'H';
    // printf("ptr2 points to: %s\n", ptr2);  // llo, World!
    
    // char *ptr3 = ptr + 4;  // points to the character 'W' in "World"
    // *ptr3 = 'i';  // modifies the character at ptr2 (which is 'o' in "Hello")
    // //output: HellH, iorld!
    // printf("ptr3 points to: %s\n", ptr3);  // , iorld!
    
    // strcpy(ptr, "Nisath!");  // modifies the string starting at ptr3
    // *ptr = 0x00;  // null-terminate the string at the first character
    // printf("ptr2 points to: %s\n", ptr2);  // o, World! 
   
    // printf("ptr points to: %s\n", ptr);  // o, World! 

}