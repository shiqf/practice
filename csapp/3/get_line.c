#include <stdio.h>
#include <string.h>

char *get_line()
{
    char buf[4];
    char *result;
    gets(buf);
    result = malloc(strlen(buf));
    strcpy(result, buf);

    return result;
}

int main(void)
{
    printf("%s\n", get_line());

    return 0;
}
