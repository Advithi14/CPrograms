#include <stdio.h>

int main() {
    float principle, rate, time, interest, amount;

    printf("Enter the principle amount: ");
    scanf("%f", &principle);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time (in years): ");
    scanf("%f", &time);

    // Calculating simple interest
    interest = (principle * time * rate) / 100;
    amount = principle + interest;

    printf("\nSimple Interest: %.2f\n", interest);
    printf("Amount: %.2f\n", amount);

    return 0;
}
