#include <stdio.h>

int main(void)
{
    float dollar, tax;
    printf("Enter an amount: ");
    scanf("%f", &dollar);

    tax = dollar * (1 + 0.05f);

    printf("With tax added: %.2f\n", tax);
    return 0;
}
