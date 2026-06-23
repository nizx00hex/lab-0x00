#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>



void fatal(char *message) {
    char error_message[100];

    strcpy(error_message, "[!!] Fatal Error");
    strncat(error_message, message, 83);
    perror(error_message);
    exit(-1);
}


void usage(char *prog_name, char *file_name) {
    printf("Usage: %s <data to add to %s>\n", prog_name, file_name);
    exit(0);
}

void saveCard(char *datafile, char *cardName, int cardNum) {

    int fd;
    fd = open(datafile, O_WRONLY|O_CREAT|O_APPEND, S_IRUSR|S_IWUSR);
    if(fd == -1)
        fatal("in saveCard() while opening file");

    printf("[DEBUG] file descriptor is %d\n", fd);

    if(write(fd, cardName, strlen(cardName)) == -1)
        fatal("in savingCard() while writing buffer to file");

    if(write(fd, &cardNum, 4) == -1)
        fatal("in savingCard() while writing number to file");

    if(close(fd) == -1)
        fatal("in savingCard() while closing file");


    printf("Card has been saved...\n");
}

void *ec_malloc(unsigned int size) {
    void *ptr;
    ptr = malloc(size);
    if(ptr == NULL)
        fatal("in ec_malloc() on memory allocation");
    return ptr;
}


int main(int argc, char *argv[]) {

    int count;
    char *buffer, *datafile;

    buffer = (char *) ec_malloc(100);
    datafile = (char *) ec_malloc(40);
    strcpy(datafile, "/home/nizx4ehex/lab-ter0x4e/lab-0x00/notes");
    

    if(argc < 2)
        usage(argv[0], datafile);

    count = atoi(argv[2]);
    
    strcpy(buffer, argv[1]);
    // strcpy(buffer2, argv[2]);
    saveCard(datafile, buffer, count);

    free(buffer);
    free(datafile);

}