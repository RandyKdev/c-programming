#include <assert.h>
#include <stdbool.h>

struct date {
    int month, year, day;
};

bool isLeapYear(int year) {
    if(year % 4 == 0 && year % 100 != 0) {
        return true;
    }
    
    if(year % 100 == 0 && year % 400 == 0) {
        return true;
    }

    return false;
}

int day_of_year(struct date d) {
    int days_of_months[12] = {
        [8] = 30,
        [3] = 30,
        [5] = 30,
        [10] = 30,
        [1] = 28,
        [0] = 31,
        [2] = 31,
        [4] = 31,
        [6] = 31,
        [7] = 31,
        [9] = 31,
        [11] = 31,
    };
    int days = 0;
    for(int i = 0; i < d.month - 1; i++) {
        days += days_of_months[i];
    }
    days += d.day;

    if(isLeapYear(d.year)) {
        days++;
    }
    return days;
}

int main(void) {
    assert(day_of_year((struct date) {.day = 10, .month = 2, .year = 2000}) == 41);
    return 0;
}