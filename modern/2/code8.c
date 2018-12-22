#include <stdio.h>

int main(void)
{
    float loan, rate, payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    int i;
    float value  = loan;;

    for (i = 0; i < 3; ++i) {
        value = value * (1 + rate / 12.0 / 100.0) - payment;
        printf("Balance remaining after first payment: %.2f\n", value);
    }

    return 0;
}
