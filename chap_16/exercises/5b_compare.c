#include <stdio.h>

struct date {
    int month, day, year;
};

int compare_dates(struct date d1, struct date d2) {
    int days_from_beginning1 = d1.day + (d1.month * 30) + (d1.year * 366);
    int days_from_beginning2 = d2.day + (d2.month * 30) + (d2.year * 366);
    if(days_from_beginning1 > days_from_beginning2) return 1;
    if(days_from_beginning2 > days_from_beginning1) return -1;
    return 0;
}

int main(void) {
    struct date d1 = {.day = 30, .month = 12, .year = 2};
    struct date d2 = {.day = 1, .month = 1, .year = 5};

    printf("%d\n", compare_dates(d1, d2));
    
    return 0;
}