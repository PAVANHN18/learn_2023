#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time calculateTimeDifference(struct Time startTime, struct Time endTime) {
    struct Time difference;

    // Calculate the difference in seconds
    int startSeconds = startTime.hours * 3600 + startTime.minutes * 60 + startTime.seconds;
    int endSeconds = endTime.hours * 3600 + endTime.minutes * 60 + endTime.seconds;
    int diffSeconds = endSeconds - startSeconds;

    // Calculate the hours, minutes, and remaining seconds
    difference.hours = diffSeconds / 3600;
    difference.minutes = (diffSeconds % 3600) / 60;
    difference.seconds = (diffSeconds % 3600) % 60;

    return difference;
}

int main() {
    struct Time startTime, endTime, difference;

    // Get the start time from the user
    printf("Enter the start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    // Get the end time from the user
    printf("Enter the end time (hours minutes seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    // Calculate the difference between the two time periods
    difference = calculateTimeDifference(startTime, endTime);

    // Display the difference
    printf("Time difference: %d hours %d minutes %d seconds\n", difference.hours, difference.minutes, difference.seconds);

    return 0;
}
