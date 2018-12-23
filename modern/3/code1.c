#include <stdio.h>

int main(void)
{
    int y, m, d;

    printf("Enter a data (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m, &d, &y);
    printf("You entered the date %d%02d%02d\n", y, m, d);

    return 0;
}
