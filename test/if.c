#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2) {
    return num1 > num2 ? num1 : num2;
}

int main(void)
{
    printf("%d\n", max(5, 9));

    return 0;
}
