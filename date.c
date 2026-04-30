#include <stdio.h>
#include <time.h>

void main() {
    time_t TIME = time(NULL);
    // ^^^^ Return Type
    
    struct tm tm = *localtime(&TIME);
    printf(
        "%d-%02d-%02d %02d:%02d:%02d\n",
        (tm.tm_year + 1900), // Years
        (tm.tm_mon + 1), // Months
        tm.tm_mday,  // Days
        tm.tm_hour, // Hours
        tm.tm_min, // Minutes
        tm.tm_sec // Seconds
    );
}