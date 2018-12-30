#define M 5
#define N 7

/* T D[R][C] 数组可以写成 */
/* &D[i][j] = D + L(C * i + j) */

long P[M][N];
long Q[N][M];

long sum_element(long i, long j) {
    return P[i][j] + Q[j][i];
}
