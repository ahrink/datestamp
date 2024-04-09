#include <stdio.h>
#include <time.h>

// Function to generate the auto-generated timestamp in the format "counter:timestamp"
void ahr() {
    struct timespec currentTime;
    clock_gettime(CLOCK_REALTIME, &currentTime);

    // Extract individual components of the timestamp
    struct tm timeInfo;
    localtime_r(&currentTime.tv_sec, &timeInfo);

    // Format and print the auto-generated timestamp
    printf("%04d%02d%02d%02d%02d%02d.%09ld\n",
           timeInfo.tm_year + 1900,
           timeInfo.tm_mon + 1,
           timeInfo.tm_mday,
           timeInfo.tm_hour,
           timeInfo.tm_min,
           timeInfo.tm_sec,
           currentTime.tv_nsec);
}

int main() {
    // Call the function to generate and print the auto-generated timestamp
    ahr();

    return 0;
}
