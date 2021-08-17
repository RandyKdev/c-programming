#include<stdio.h>
#include<stdbool.h>

int main() {
    int firstDay, firstMonth, firstYear;
    int secondDay, secondMonth, secondYear;
    bool isFirstDateEarlier;

    printf("Enter first date (mm/dd//yy): ");
    scanf("%d/%d/%d", &firstMonth, &firstDay, &firstYear);

    printf("Enter second date (mm/dd//yy): ");
    scanf("%d/%d/%d", &secondMonth, &secondDay, &secondYear);

    if(firstYear != secondYear) {
        if(firstYear < secondYear) isFirstDateEarlier = true;
        else isFirstDateEarlier = false;
    } else if(firstMonth != secondMonth) {
        if(firstMonth < secondMonth) isFirstDateEarlier = true;
        else isFirstDateEarlier = false;
    } else if(firstDay != secondDay) {
        if(firstDay < secondDay) isFirstDateEarlier = true;
        else isFirstDateEarlier = false;
    } else {
        printf("The two dates are the same");
        return 1;
    }

    if(isFirstDateEarlier)
        printf("%d/%d/%d is earlier than %d/%d/%d\n", firstMonth, firstDay, firstYear, secondMonth, secondDay, secondYear);
    else 
        printf("%d/%d/%d is earlier than %d/%d/%d\n", secondMonth, secondDay, secondYear, firstMonth, firstDay, firstYear);

    return 0;
}