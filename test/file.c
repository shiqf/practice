#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char line[255];
    FILE *fp = fopen("test.txt", "r");
    fgets(line, 255, fp);
    fgets(line, 255, fp);
    printf("%s\n", line);

    fclose(fp);
    return 0;
}
