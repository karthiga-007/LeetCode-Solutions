// Last updated: 8/17/2026, 7:26:39 PM
int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    return(arrivalTime + delayedTime)%24;
}