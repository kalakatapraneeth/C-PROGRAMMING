#include <stdio.h>

int main()
{
    int d1, c1, d2, c2;
    int dollars, cents;

    scanf("%d %d", &d1, &c1);
    scanf("%d %d", &d2, &c2);

    dollars = d1 + d2;
    cents = c1 + c2;

    dollars = dollars + cents / 100;
    cents = cents % 100;

    printf("%d dollars and %d cents", dollars, cents);

    return 0;
}