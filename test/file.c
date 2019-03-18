#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;
    FILE *fp = fopen("if.c", "r");

    /* while ((ch = getc(fp)) != EOF) { */
    /*     putc(ch, stdout); */
    /* } */

    fclose(fp);
    return 0;
}
