#include <stdio.h>

int main(void)
{
    int dollar;

    printf("Enter dollar: ");
    scanf("%d", &dollar);

    int m = dollar;
    printf("$20 bills: %d\n", m / 20);
    m = m % 20;
    printf("$10 bills: %d\n", m / 10);
    m = m % 10;
    printf("$5 bills: %d\n", m / 5);
    m = m % 5;
    printf("$1 bills: %d\n", m);

    return 0;
}
