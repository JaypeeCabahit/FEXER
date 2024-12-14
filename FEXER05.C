#include <stdio.h>
 
// Function prototypes
double convertMeters(double yards);
double convertFeet(double yards);
double convertInches(double yards);
double convertCenti(double yards);
 
int main() {
    double yards;
 
    // Get the input from the user
    printf("Enter the length in yards: ");
    scanf("%lf", &yards);
 
    // Convert and display the results
    printf("Length in meters: %.2f\n", convertMeters(yards));
    printf("Length in feet: %.2f\n", convertFeet(yards));
    printf("Length in inches: %.2f\n", convertInches(yards));
    printf("Length in centimeters: %.2f\n", convertCenti(yards));
 
    return 0;
}
 
// Convert yards to meters
double convertMeters(double yards) {
    return yards * 0.9144;
}
 
// Convert yards to feet
double convertFeet(double yards) {
    return yards * 3;
}
 
// Convert yards to inches
double convertInches(double yards) {
    return yards * 36;
}
 
// Convert yards to centimeters
double convertCenti(double yards) {
    return yards * 91.44;
}
