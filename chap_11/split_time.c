/**
 * @file 
 * @brief Splits a time in seconds from midnight to hours, mins, secs
 */

#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void) {
    long total_secs;
    
    printf("Enter total number of seconds: ");
    scanf("%ld", &total_secs);

    int hours, mins, secs;
    split_time(total_secs, &hours, &mins, &secs);

    printf("Numbero of hours = %d, minutes = %d, seconds = %d\n", hours, mins, secs);

    return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec) {
    *hr = (int) (total_sec / 3600);
    int totNumOfHrsInSecs = *hr * 3600;

    *min = (int) ((total_sec - totNumOfHrsInSecs) / 60);
    int totNumOfMinsInSecs = *min * 60;
    
    *sec = (int) (total_sec - (totNumOfHrsInSecs + totNumOfMinsInSecs));
}