#define N 16
typedef int fix_matrix[N][N];

void  fix_set_diay_opt(fix_matrix A, int val) {
    long i;
    for (i = 0; i < N; ++i) {
        A[i][i] = val;
    }
}
