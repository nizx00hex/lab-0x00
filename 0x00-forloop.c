#include <stdio.h>

int main() {
	int i = 0x00;
	for(;;) {
		printf("Hello, World!\n");
		i++;
		if(i == 10){
			printf("End..\n");
			break;
		}
	}
	return 0;
}
