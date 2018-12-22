#include <stdio.h>

int main(void)
{
    int x;

    printf("Enter value of x: ");
    scanf("%d", &x);

    int value = 3 * x + 2;
    value *= x - 5;
    value *= x - 1;
    value *= x + 7;
    value *= x - 6;

    printf("value = %d\n", value);

    return 0;
}
