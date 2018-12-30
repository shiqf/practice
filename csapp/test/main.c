#include <stdio.h>

int main(int argc, char *argv[])
{
    short S[7];
    short *T[3];
    short **U[6];
    int V[8];
    double *W[4];

    printf("%ld %ld %ld %ld %ld\n", sizeof(S), sizeof(T), sizeof(U), sizeof(V), sizeof(W));

    return 0;
}
