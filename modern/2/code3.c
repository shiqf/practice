#include <stdio.h>

#define PI 3.1415926

int main(void)
{
    float v;
    int r;

    printf("Enter thr r: ");
    scanf("%d", &r);

    v = (4.0f / 3.0f) * PI * r * r * r;

    printf("volume is: %f\n", v);

    return 0;
}
