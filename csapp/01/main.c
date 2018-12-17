#include <stdio.h>
#include "show_bytes.c"

char s[65];
int main(int argc, char *argv[])
{
    show_2int(0x00000008, s);
    /* const char *r = "abcdef"; */
    /* show_bytes((byte_pointer) r, strlen(r)); */
    
    /* int a = 0x12345678; */
    /* test_show_bytes(a); */

    /* itoa(a, s, 2); */

    return 0;
}
