#include <stdio.h>

int main()
{
    float X, Y, R, interest, total, discount, finalInterest, finalAmount;

    scanf("%f", &X);
    scanf("%f", &Y);
    scanf("%f", &R);

    interest = (X * Y * R) / 100;
    total = X + interest;

    discount = interest * 0.02;
    finalInterest = interest - discount;
    finalAmount = X + finalInterest;

    printf("Interest rate: %.2f\n", R);
    printf("Total interest: Rs. %.2f\n", interest);
    printf("Total amount: Rs. %.2f\n", total);
    printf("Discount: Rs. %.2f\n", discount);
    printf("Amount given back: Rs. %.2f\n", finalInterest);
    printf("Final amount: Rs. %.2f\n", finalAmount);

    return 0;
}