#include <stdbool.h>
#include <math.h>

bool prime(int m)
{
    bool shushu = true;
    if (m < 2)
    {
        shushu = false;
        return shushu;
    }
    if (m == 2 || m == 3)
    {
        return shushu;
    }
    for (int i = 2; i < sqrt(m); i++)
    {
        if (m % i == 0)
        {
            shushu = false;
            break;
        }
    }

    return shushu;
}
