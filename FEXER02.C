#include <stdio.h>

int main() {
    int input;
    int teamAScore = 0, teamBScore = 0;

    printf("\n=== Soccer Simulation Game ===\n");
    printf("Instructions:\n");
    printf("- Enter 1 if Team A scores.\n");
    printf("- Enter 2 if Team B scores.\n");
    printf("- Enter 0 to end the game and display the score summary.\n\n");

    do {
        printf("Enter your input (0, 1, 2): ");
        scanf("%d", &input);

        if (input == 1) {
            teamAScore++;
            printf("Team A scored! Current Score - Team A: %d | Team B: %d\n", teamAScore, teamBScore);
        } else if (input == 2) {
            teamBScore++;
            printf("Team B scored! Current Score - Team A: %d | Team B: %d\n", teamAScore, teamBScore);
        } else if (input != 0) {
            printf("Invalid input. Please enter 0, 1, or 2 only.\n");
        }
    } while (input != 0);

    printf("\n=== Game Over! ===\n");
    printf("Final Score:\n");
    printf("Team A: %d | Team B: %d\n", teamAScore, teamBScore);

    if (teamAScore > teamBScore) {
        printf("Winner: Team A!\n");
    } else if (teamBScore > teamAScore) {
        printf("Winner: Team B!\n");
    } else {
        printf("It's a tie!\n");
    }

    return 0;
}
