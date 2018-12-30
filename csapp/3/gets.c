#include <stdio.h>

char *gets_test(char *s)
{
    int c;
    char *dest = s;
    while ((c = getchar()) != '\n' && c != EOF) {
        *dest++ = c;
    }

    if (c == EOF && dest ==s)
        return NULL;
    *dest++ = '\0';

    return s;
}

void echo(void)
{
    char buf[8];
    gets_test(buf);
    puts(buf);
}
