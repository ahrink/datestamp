Code Explanation: cntahr.c

1. Header Files:

#include <stdio.h>: Standard input/output functions for printing messages and interacting with the "ahr stamp" executable.
#include <unistd.h>: Functions for accessing system calls like system.
#include <stdlib.h>: General utility functions, including atoi for converting strings to integers.
#include <string.h>: String manipulation functions for comparing arguments.

2. Main Function:

Parses Command-Line Arguments:
Checks for the -c flag and a valid integer argument specifying the loop count.
Handles invalid input appropriately.

Loops and Calls "ahr stamp":
Iterates max_loops times:
Uses system to call the external "ahr stamp" executable with each iteration.

Step-by-Step Instructions:

Navigate to the Project Directory:
Open a terminal and execute: cd /home/<USER>/uCode (Replace <USER> with your actual username).
Create the C File:
Open a text editor like nano: nano cntahr.c
Paste and Verify Code:
Paste the provided code into the file.
Ensure the path to the "ahr" executable is correct within the system call.

Save and Exit:
Save the file (usually Ctrl+O in nano, then Ctrl+X to exit).

Compile:
In the terminal, run: gcc -o cntahr cnt_ahr.c
Execute with Loop Count (Optional):
To control the number of "ahr stamp" calls: ./cntahr -c 1000 (This will execute it 1000 times.)
To run with the default count of 1: ./cntahr

Output:

Each execution of "ahr stamp" will print a timestamp in the defined format.
If you run with a loop count, you'll see multiple timestamps generated accordingly.
