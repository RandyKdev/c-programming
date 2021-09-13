#include <stdio.h>

int main(void) {
    const char *months[12] = {"January", "February", "March",
                            "April", "May", "June",
                            "July", "August", "September",
                            "October", "November", "December"};
    
    int month, day, year;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %s %d, %d\n", months[month - 1], day, year);

    return 0;
}