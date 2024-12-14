#include <stdio.h>

int main() {
    long pay = 1;
    long totalPay = 0;
    int day;

    printf("\n=== Pay Calculation Over 30 Days ===\n");

    for (day = 1; day <= 30; day++) {
        totalPay += pay;
        printf("Day %2d: P%ld\n", day, pay);
        pay = pay * 2;
    }

    printf("\nTotal pay after 30 days: P%ld\n", totalPay);

    return 0;
}
