/**
 * File: recv_signal.c
 * Modified by: Stephen H.
 * 
 * Brief summary of program: Handles the signal sent by send_signal.c
 */


#include <signal.h>
#include <unistd.h>
#include <stdio.h>


void handle_sigusr1(int sig, siginfo_t *info, void *context) {
    printf("\nSIGUSR1 received! Data sent: %d\n", info->si_value.sival_int);
}

int main() {
    struct sigaction sa;
    sa.sa_flags = SA_SIGINFO;
    sa.sa_sigaction = handle_sigusr1;

    sigaction(SIGUSR1, &sa, NULL);

    printf("Receiver running. PID: %d\n", getpid());


    while (1) {
        pause();
    }

    return 0;
}
