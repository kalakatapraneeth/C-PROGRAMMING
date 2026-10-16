#include <stdio.h>

int main()
{
    int years;
    float score;

    printf("Enter years of experience: ");
    scanf("%d", &years);

    printf("Enter performance score: ");
    scanf("%f", &score);

    if (years < 3)
    {
        printf("Junior");
    }
    else if (years <= 7)
    {
        if (score >= 80)
            printf("Mid-Level");
        else
            printf("Junior");
    }
    else
    {
        if (score >= 85)
            printf("Senior");
        else if (score >= 80)
            printf("Mid-Level");
        else
            printf("Junior");
    }

    return 0;
}