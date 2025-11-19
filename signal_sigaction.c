/**
 * File: signal_sigaction.c
 * Modified by: Stephen H.
 * 
 * Brief summary of program: Handler for SIGUSR1 using sigaction. Prints the PID of the process that sent the signal.
 */


#include <signal.h>
#include <unistd.h>
#include <stdio.h>


void handle_sigusr1(int sig, siginfo_t *info, void *context) {
    printf("\nSIGUSR1 received from process PID: %d\n", info->si_pid);
}

int main() {
    struct sigaction sa;
    sa.sa_flags = SA_SIGINFO;
    sa.sa_sigaction = handle_sigusr1;


    sigaction(SIGUSR1, &sa, NULL);

    printf("Waiting for SIGUSR1... (PID: %d)\n", getpid());


    while (1) {
        pause();
    }

    return 0;
}
