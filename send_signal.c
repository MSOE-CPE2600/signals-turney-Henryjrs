/**
 * File: send_signal.c
 * Modified by: Stephen H.
 * 
 * Brief summary of program: Sends SIGUSR1 with a random integer to a given PID using sigqueue.
 */



#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>



int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <PID>\n", argv[0]);
        return 1;
    }

    pid_t pid = atoi(argv[1]);

    srand(time(NULL));
    int random_num = rand() % 100;

    union sigval value;
    value.sival_int = random_num;

    printf("Sending SIGUSR1 with data: %d to PID: %d\n", random_num, pid);
    sigqueue(pid, SIGUSR1, value);

    return 0;
}
