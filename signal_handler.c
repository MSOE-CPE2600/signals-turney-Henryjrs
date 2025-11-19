/**
 * @file signal_handler.c
 * @brief Sets a signal handler for SIGINT (signal interrupt), the handler prints a message and then quits
 */

/**
 * Modified by: Stephen H
 * 
 * Brief summary of modifications: Removing the exit command
 */


#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>



void handle_signal() {
    printf("Received a signal\n");
    exit(1);
}

int main() {

    // Register for the signal
    signal(SIGINT, handle_signal);

    // Wait until a signal is received
    while(1) {
        printf("Sleeping\n");
        sleep(1);
    }

    return 0;
}
