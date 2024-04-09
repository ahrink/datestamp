#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int max_loops = 1;  // Default loop count

    // Check for loop count argument (-c)
    if (argc > 2 && strcmp(argv[1], "-c") == 0) {
        max_loops = atoi(argv[2]);
        if (max_loops < 1) {
            fprintf(stderr, "Invalid loop count: %s\n", argv[2]);
            exit(1);
        }
    } else if (argc > 1) {
        fprintf(stderr, "Usage: %s [-c count]\n", argv[0]);
        exit(1);
    }

    // Loop execution
    for (int i = 0; i < max_loops; i++) {
        // Call the external executable "ahr stamp"
        system("/home/<USER>/uCode/ahr");
    }

    return 0;
}
