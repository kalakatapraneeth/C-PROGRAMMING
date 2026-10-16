#include <stdio.h>

int main()
{
    float petrol, mileage, distance;

    scanf("%f", &petrol);
    scanf("%f", &mileage);
    scanf("%f", &distance);

    if (petrol * mileage >= distance)
    {
        printf("Can reach");
    }
    else
    {
        printf("Cannot reach");
    }

    return 0;
}