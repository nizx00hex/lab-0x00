#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void print_ascii_char(char *);
void usage(char *);

int main(int argc, char *argv[]){
	if(argc < 2)
		usage(argv[0]);

	print_ascii_char(argv[1]);
}


void usage(char *value) {
	printf("Usage %s <enter the type 'capital or small'>\n", value);
	exit(0);
}
 
void print_ascii_char(char *type){
	if(strcmp(type, "CAPITAL") == 0 || strcmp(type, "capital") == 0) {
		for(unsigned int i = 97; i < 122; i++){
			printf("#%d : %c\n", i-32, i-32);
		}	
	}
	else if(strcmp(type, "SMALL") == 0 || strcmp(type, "small") == 0) {
		for(unsigned int i = 97; i < 122; i++){
			printf("#%d : %c\n", i, i);
		}	
	}
	else {
		printf("invalid argument <%s> \n", type);
	}
}

