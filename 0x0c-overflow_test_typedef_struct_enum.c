#include <stdio.h>
#include <string.h>
#include <stdlib.h>



typedef enum {
    FALSE = 0,
    TRUE = 1
}bool_t;

typedef struct {
    char message[415];
    int count;
    bool_t verify;
} msg_t;

int err_mg(char *prog_name) {
    printf("Usage: %s <enter to print>\n", prog_name);
    exit(0);
}


bool_t str_cpy(msg_t *msg, const char *argv_msg, const int arg_count) {

    // printf("before->%s\n", msg->message);
    strncpy(msg->message, argv_msg, sizeof(msg->message) - 1);
    msg->message[sizeof(msg->message) - 1] = '\0';



    msg->count = arg_count; // Convert the 2nd arg into an integer.
    // printf("Repeating %d times..\n", count);
    for(int i=1; i < msg->count; i++)
        printf("%3d - %s\n", i, msg->message); // Print the 1st arg.


    // printf("after->%s\n", msg->message);
    return TRUE;
}

int main(int argc, char *argv[]) {
    msg_t msg;
    // bool_t boo;

    //check if the argument count less that 2
    if(argc < 2)
        err_mg(argv[0]);
    
    //count for print loop and stop if reach 100 or greater 100.
    msg.count = atoi(argv[2]);
    if(msg.count >= 100) {
        // printf("you can only enter: 100bytes\n");
        // return 1;
        msg.count = 100;
        printf("Your reach the limit defaultly set value 99\n");
    }
    // printf("%d\n", msg.count);
    // printf("%s\n", argv[1]);
    if(!str_cpy(&msg, argv[1], msg.count))
        return 1;

    // printf("%s", msg.message);
    return 0;

}
