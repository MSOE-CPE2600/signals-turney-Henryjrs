/**
 * File: signal_alarm.c
 * Modified by: Stephen H.
 * 
 * Brief summary of program: prints a message when alarm triggers
 */


#include <signal.h>
#include <unistd.h>
#include <stdio.h>



void handle_alarm(int sig) {
    printf("\nSIGALRM received! Alarm triggered after 5 seconds.\n");
}

int main() {

    signal(SIGALRM, handle_alarm);

    printf("Setting alarm for 5 seconds...\n");
    alarm(5);


    while (1) {
        pause();
    }

    return 0;
}
