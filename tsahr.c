#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <time.h>
#include <string.h>

void timer_handler(int sig) {
    // Signal handler for timer expiration
    printf("Timer expired!\n");
}

int main(int argc, char *argv[]) {
    int timer_seconds = 0;
    int record_count = 0;

    if (argc > 2 && strcmp(argv[1], "-s") == 0) {
        timer_seconds = atoi(argv[2]);
        if (timer_seconds < 0) {
            fprintf(stderr, "Invalid timer value: %s\n", argv[2]);
            exit(1);
        }
    } else if (argc > 1) {
        fprintf(stderr, "Usage: %s -s <seconds>\n", argv[0]);
        exit(1);
    }

    signal(SIGALRM, timer_handler);

    time_t start_time = time(NULL);

    while (1) {
        // Call ahr stamp
        system("/home/vx/uCode/ahr");
        record_count++;

        // Check if timer has expired
        time_t current_time = time(NULL);
        if (difftime(current_time, start_time) >= timer_seconds) {
            break;
        }
    }

    printf("Total records printed in %d seconds: %d\n", timer_seconds, record_count);

    // Print one stamp by default if no timer is specified
    if (timer_seconds == 0) {
        system("/home/vx/uCode/ahr");
        printf("Use tsahr -s <seconds> to specify a duration\n");
    }

    return 0;
}
