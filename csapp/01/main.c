#include <stdio.h>
#include "show_bytes.c"

int main(int argc, char *argv[])
{
    
    int a = 0x12345678;
    test_show_bytes(a);

    return 0;
}
