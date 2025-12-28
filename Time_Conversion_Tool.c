#include<stdio.h>

int main() {
    int seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int secs = seconds % 60;

    printf("Time = %d hrs : %d mins : %d secs", hours, minutes, secs);

    return 0;
}