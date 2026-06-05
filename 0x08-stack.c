#include <stdio.h>
#include <string.h>

void test_funciton(int, int, int, int);

int main(){
    test_funciton(1,2,3,4);
}

void test_funciton(int a, int b, int c, int d){
    int flag;
    char buffer[10];
    
    flag = 0x90;
    buffer[0] = 'A';
    buffer[1] = 'B';

    printf("%d\n", flag);
    for(int i = 0; i < strlen(buffer); i++){
        printf("%c\n", buffer[i]);
    }
    printf("%d\n", flag);
    
}
