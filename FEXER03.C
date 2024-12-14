#include <stdio.h>

int main() {
    long long pay = 1;
    long long totalPay = 0;

    printf("\n=== Pay Calculation Over 30 Days ===\n");

    for (int day = 1; day <= 30; day++) {
        totalPay += pay;
        printf("Day %2d: P%lld\n", day, pay);
        pay <<= 1; // Equivalent to pay *= 2, but using bitwise shift for variety
    }

    printf("\nTotal pay after 30 days: P%lld\n", totalPay);

    return 0;
}
