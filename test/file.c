#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp = fopen("./test.txt", "w");

    fclose(fp);

    return 0;
}
