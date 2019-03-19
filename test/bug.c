#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("hello world\n");
    char str[20] = "hello world";

    int i = 0;
    while (str[i] != '\0') {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}
