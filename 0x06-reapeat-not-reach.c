#include <stdio.h>
#include <stdlib.h>
int i = 0;
int main(){
	for(i; i < 10; i++){
		printf("%d\n", i);
		if( i == 8){
			i = 0;
			printf("Now i is: %d\n", i);
		}
	}
	int j = i;
	if( j == 7){
		exit(0);
	}
	return 0;
}
