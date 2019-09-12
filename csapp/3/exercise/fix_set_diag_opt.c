#include <stdio.h>

#define N 16
typedef int fix_matrix[N][N];
int A[N][N];

void  fix_set_diay_opt(fix_matrix A, int val) {
    int *Aptr = &A[0][0];
    int *Bend = &A[N][N];

    do {
        *Aptr = val;
        Aptr += N + 1;
    } while (Aptr != Bend);

    int i, j;
    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char *argv[])
{
    fix_set_diay_opt(A, 3);

    return 0;
}
