#include<stdio.h>
#include <string.h>
int main() {
    char str_a[20];
    char *pointer;
    char *pointer2;

    strcpy(str_a, "Hello, world!\n");
    
    pointer = str_a; 
    printf("(%s - %p)\n", pointer, pointer); //Hello, world!
    
    pointer2 = pointer + 2; 
    //pointer inside: he;
    //pointer2 inside: llo, world!
    printf("(%s - %p)\n", pointer2, pointer2); //llo, world!
    printf("(%s - %p)\n", pointer, pointer); //Hello, world!
    
    // strcpy(pointer2, "y you guys!\n"); //here we overwrite the llo, world! with y you guys! so that's why when we print pointer2, it shows y you guys! instead of llo, world! also printf(pointer) hey you guy's!. 
    // printf("(%s - %p)\n", pointer2, pointer2); //y you guys!
    printf("(%s - %p)\n", pointer, pointer); //Hey you guys! how that hey guys.... is printed? because pointer2 is pointing to the 3rd character of pointer, so when we modify pointer2, it also modifies the string that pointer is pointing to, since they both point to the same string in memory. Therefore, when we print pointer after modifying pointer2, it reflects the changes made through pointer2.
    
}
