#include <stdio.h>
#include <math.h>

const int DEPARTURE_TIMES[8] = {480, 583, 679, 767, 840, 945, 1140, 1305};
const int ARRIVAL_TIMES[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main() {
    int desiredTime;
    printf("Enter desired time: ");
    scanf("%d", &desiredTime);

    int departureTime, arrivalTime;
    find_closest_flight(desiredTime, &departureTime, &arrivalTime);

    printf("The closest departure time is %d and arrives at %d\n", departureTime, arrivalTime);

    return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time) {
    // The flight number of the flight with the closest departure time to desired time
    int flightNumber = 1;

    // The difference between the desired time and the departure time
    int difference = (int) fabs(desired_time - DEPARTURE_TIMES[0]);

    int temp;

    for(int i  = 1; i < 8; i++) {
        temp = (int) fabs(desired_time - DEPARTURE_TIMES[i]); 
        if(temp < difference) {
            difference = temp;
            flightNumber = i + 1;
        } else break;
    }

    *departure_time = DEPARTURE_TIMES[flightNumber - 1];
    *arrival_time = ARRIVAL_TIMES[flightNumber - 1];
}