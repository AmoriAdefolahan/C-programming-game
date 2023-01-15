#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    int i, score = 0;
    char answer;

    // Array of questions
    char *questions[5] = {
    
        "The main system board of the computer is called?",
        " Which of the following system components is the brain of a computer?",
        " Which of the following is not a hardware processing chip?",
        "Which of the following is the full form of NTFS?",
        "What is the built-in permanent memory in a computer called?"
    };

    // Array of answers
    char *answers[5] = {
        "Motherboard",
        "CPU",
        "Java",
        "New Technology file system",
        " ROM"
    };

    // Quiz loop
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", questions[i]);
        printf("Enter your answer: ");
        scanf(" %c", &answer);

        if (answer == answers[i])
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Incorrect. The correct answer is %s.\n", answers[i]);
        }
    }

    printf("You scored %d out of 5.\n", score);

    return 0;
}
