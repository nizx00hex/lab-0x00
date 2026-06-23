#include <stdio.h>
#include <string.h>

char global_buffer[128];

void message(char *message) {
	strcpy(global_buffer ,message);
	printf("Message is %s\n", global_buffer);
}
int main(int argc, char *argv[]){
	if(argc == 2 || argc > 2) {
		message(argv[1]);
	} else {
		printf("Usage: %s <Enter message>\n", argv[0]);
                return 1;
	}
	return 0;
}
