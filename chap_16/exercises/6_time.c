#include <stdio.h>

struct time {
    int hours, minutes, seconds;
};

struct time split_time(long total_seconds) {
    struct time t;
    t.hours = total_seconds / 3600;
    total_seconds %= 3600;
    t.minutes = total_seconds / 60;
    total_seconds %= 60;
    t.seconds = total_seconds;
    return t;
}

int main(void) {
    long secs;
    scanf("%ld", &secs);
    struct time genTime = split_time(secs);
    printf("The time is: %d:%d:%d\n", genTime.hours, genTime.minutes, genTime.seconds);
    return 0;
}