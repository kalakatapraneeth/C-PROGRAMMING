#include <stdio.h>

int main()
{
    int answered, time, submitted;

    printf("Enter number of questions answered: ");
    scanf("%d", &answered);

    printf("Enter remaining time (in minutes): ");
    scanf("%d", &time);

    printf("Has the exam already been submitted? (1-Yes, 0-No): ");
    scanf("%d", &submitted);

    if (answered >= 1 && time > 0 && submitted == 0)
    {
        printf("Exam submitted successfully.");
    }
    else
    {
        printf("Exam submission not allowed.");
    }

    return 0;
}