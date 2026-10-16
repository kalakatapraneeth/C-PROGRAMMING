#include <stdio.h>

int main() {
    float distance, fare = 100, discount;
    char membership;

    printf("Enter distance travelled (in km): ");
    scanf("%f", &distance);

    printf("Do you have membership? (Y/N): ");
    scanf(" %c", &membership);

    if (distance > 10) {
        fare += (distance - 10) * 20;
    }

    if (membership == 'Y' || membership == 'y') {
        discount = fare * 0.10;
        fare -= discount;
    }

    printf("Amount payable = Rs. %.2f\n", fare);

    return 0;
}