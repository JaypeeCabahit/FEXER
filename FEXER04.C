#include <stdio.h>

int main() {
    int kills = 0;
    int input;

    printf("Enter your action (1 for kill, 2-4 for events, 0 to quit):\n");

    do {
        printf("Input: ");
        scanf("%d", &input);

        if (input == 0) {
            printf("Game Over! Thanks for playing.\n");
            break;
        }

        if (input == 1) {
            kills++;
            if (kills == 1) {
                printf("First Kill!\n");
            } else if (kills == 3) {
                printf("Killing Spree!\n");
            } else if (kills == 4) {
                printf("Dominating!\n");
            } else if (kills == 5) {
                printf("Mega Kill!\n");
            } else if (kills == 6) {
                printf("Unstoppable!\n");
            } else if (kills == 7) {
                printf("Wicked Sick!\n");
            } else if (kills == 8) {
                printf("Monster Kill!\n");
            } else if (kills == 9) {
                printf("Godlike!\n");
            } else if (kills == 10) {
                printf("Beyond Godlike!\n");
            } else if (kills > 10) {
                printf("Still Beyond Godlike!\n");
            }
        } else if (input == 2) {
            printf("Neutral creeps got you! Kill streak reset.\n");
            kills = 0;
        } else if (input == 3) {
            printf("Roshan crushes you! Kill streak reset.\n");
            kills = 0;
        } else if (input == 4) {
            printf("Courier down! Kill streak reset.\n");
            kills = 0;
        } else {
            printf("Invalid input. Please enter a valid action.\n");
        }
    } while (1);

    return 0;
}
