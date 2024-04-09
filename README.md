# datestamp [SOURCE FILE: ahr.c]
Generate a full date stamp (year, month, day, hour, minute, second, nanoseconds)

Code Explanation:

1. Header Files:

#include <stdio.h>: Includes standard input/output functions for printing the timestamp.
#include <time.h>: Provides functions for accessing system time.

2. Function ahr():

Gets Current Time:
clock_gettime(CLOCK_REALTIME, &currentTime): Retrieves a high-precision timestamp and stores it in the currentTime structure.
Extracts Time Components:
localtime_r(&currentTime.tv_sec, &timeInfo): Breaks down the timestamp into individual components like year, month, day, hour, minute, and second, storing them in the timeInfo structure.
Formats and Prints Timestamp:
printf("%04d%02d%02d%02d%02d%02d.%09ld\n", ...): Prints the timestamp in the specified format:
YYYYMMDDHHmmSS.nnnnnnnnn (year, month, day, hour, minute, second, nanoseconds)

3. Function main():

Calls ahr(): Executes the ahr() function to generate and print the timestamp.

Setup Instructions:

a. Create Directory:
- Open a terminal and execute: mkdir /home/<USER>/uCode (Replace <USER> with your actual username).

b. Write Code:
Navigate to the directory: cd /home/<USER>/uCode
- Open a text editor like nano: nano ahr.c
- Paste the provided code into the file.
- Save the file (usually Ctrl+O in nano, then Ctrl+X to exit).

c. Compile:
- In the terminal, run: gcc -o ahr ahr.c

d. Run:
Execute the compiled program: ./ahr

It will print the generated timestamp in the specified format.
