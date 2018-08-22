#include <stdio.h>

int main(int argc, char *argv[])
{
    float latitude;
    float longitude;
    char info[80];
    int start = 0;

    FILE * fp = fopen("out.txt", "w");
    if (fp) {
        
    }

    puts("data=[");
    while (scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3) {
        if (start)
            printf(",\n");
        else
            start = 1;
        printf("{info: '%s'}\n", info);
        fprintf(fp, "%s\n", info);
    }
    puts("\n]");
    fclose(fp);

    return 0;
}
