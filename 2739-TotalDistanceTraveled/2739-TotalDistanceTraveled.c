// Last updated: 9/9/2026, 9:15:15 AM
int distanceTraveled(int mainTank, int additionalTank) {
    // Calculate the maximum number of fuel transfers
    int transfers = (mainTank - 1) / 4;

    // Ensure transfers do not exceed the fuel available in the additional tank
    if (transfers > additionalTank) {
        transfers = additionalTank;
    }

    // Each liter allows the truck to travel 10 km
    return (mainTank + transfers) * 10;
}