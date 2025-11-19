## Repo for Lab Week 10
#Complete assignment as assigned.

#Note, no make file is provided.  It is suggested you create one to be more efficient building your programs.


After doing research and reviewing the man pages, here are my results to the lab research:

What is a signal disposition?
The default action the operating system takes when a process receives a signal and does not define a custom handler.

What is a signal handler? What is it used for?
A function in your program that runs when a specific signal is received.
It is used to override the default disposition so you can clean up resources before exiting.
Ignore the signal.
Perform custom actions

Name and describe each of the five default dispositions?
Terminate – Ends the process (e.g., SIGINT, SIGTERM).
Ignore – Does nothing (e.g., SIGCHLD).
Stop – Suspends the process (e.g., SIGSTOP).
Continue – Resumes a stopped process (e.g., SIGCONT).
Core Dump – Terminates and creates a core file for debugging (e.g., SIGSEGV).


Name and describe one way to programmatically send a signal to a process. 
Be able to give an example (the code) to send a signal.


Name and describe one way to send a signal to a process from the command line.
Be able to give an example (the command, key combination, etc.) to send a signal.


Name and describe the signal


Define the default disposition taken by the operating system if a process does not
define a signal handler


Can the disposition be overridden by a signal handler? Why do you think this is the case?


Determine two (2) ways to send the SIGINT signal to the process created for the running program.


Be able to describe how you sent SIGINT to the process and the behavior of the process when SIGINT is handled.


SIGINT
SIGTERM
SIGUSR1
SIGKILL
SIGSTOP
