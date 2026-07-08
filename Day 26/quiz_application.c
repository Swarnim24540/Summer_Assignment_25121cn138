#include <stdio.h>

int main()
{
    int choice;
    int score = 0;

    printf("===== QUIZ APPLICATION =====\n");

    printf("\n1. Which country has won the FIFA World Cup the maximum number of times?\n");
    printf("1. Germany\n2. Italy\n3. Argentina\n4. Brazil\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 4)
    {
        score++;
    }

    printf("\n2. The 2026 FIFA World Cup will feature how many participating teams?\n");
    printf("1. 36\n2. 40\n3. 48\n4. 44\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 3)
    {
        score++;
    }

    printf("\n3. India has approved its first offshore airport in which state?\n");
    printf("1. Gujarat\n2. Kerala\n3. Maharashtra\n4. Tamil Nadu\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 3)
    {
        score++;
    }

    printf("\n4. Which is the largest planet?\n");
    printf("1. Earth\n2. Mars\n3. Jupiter\n4. Venus\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 3)
    {
        score++;
    }

    printf("\n5. What is the output device?\n");
    printf("1. Monitor\n2. Keyboard\n3. Mouse\n4. Scanner\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        score++;
    }

    printf("\nYour Score = %d/5\n", score);

    if (score == 5)
    {
        printf("Excellent!\n");
    }
    else if (score >= 3)
    {
        printf("Good Job!\n");
    }
    else
    {
        printf("Better Luck Next Time!\n");
    }

    return 0;
}