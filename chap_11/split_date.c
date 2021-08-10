/**
 * @file
 * @brief Splits an input date of a particular year into the day and month
 */

#include <stdio.h>
#include <stdbool.h>

int MONTHS[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

void split_date(int day_of_year, int year, int *month, int *day);

int main(void) {
    int day_of_year, year;
    
    printf("Enter day of the year: ");
    scanf("%d", &day_of_year);

    printf("Enter year: ");
    scanf("%d", &year);

    int month, day;

    split_date(day_of_year, year, &month, &day);

    printf("The month is %d and the day is %d\n", month, day);

    return 0;
}

bool isLeapYear(int year) {
    if(year % 4 == 0) {
        return true;
    }

    return false;
}

void split_date(int day_of_year, int year, int *month, int *day) {
    if(isLeapYear(year)) {
        MONTHS[1] = 29;
    }

    *month = 0;
    while(day_of_year > 0) {
        day_of_year -= MONTHS[(*month)++];
    }

    *day = day_of_year + MONTHS[*month - 1];

}
