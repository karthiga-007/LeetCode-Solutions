// Last updated: 9/9/2026, 9:15:11 AM
int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    return(arrivalTime + delayedTime)%24;
}