/**
 * @file signal_segfault.c
 * @brief Program that dereferences a null pointer causing a segmentation fault
 */

/**
 * Modified by: Stephen H
 * 
 * Brief summary of modifications: Added a signal handler for SIGSEGV
 */


#include <stdio.h>
#include <signal.h>

void segfault_handler(int sig) {
    printf("Segmentation fault (SIGSEGV) received!\n");
}

int main (int argc, char* argv[]) {

     // signal handler added on
    signal(SIGSEGV, segfault_handler);
    // Declare a null pointer
    int* i = NULL;

    // Dereference the null pointer
    printf("The value of i is: %d\n", *i);

    // Return to exit the program
    return 0;
}

